"""Test free-threading (no GIL)."""

# ruff: noqa: BLE001

import sys
import sysconfig
import threading
import time

import PyCTP  # pylint: disable=import-error

print(f"Python version: {sys.version}")

# 1. Check if compile-time free-threading support wad enabled
is_ft_build = sysconfig.get_config_var("Py_GIL_DISABLED") == 1
print(f"Compile-time free-threading support (--disable-gil): {is_ft_build}")

# 2. Check if GIL is actually enabled at runtime (only available in 3.13+)
if hasattr(sys, "_is_gil_enabled"):
    gil_enabled = sys._is_gil_enabled()  # pylint: disable=protected-access
    print(f"Runtime GIL enabled: {gil_enabled}")
    if not gil_enabled:
        print(">>> Interpreter is running in free-threaded (no GIL) mode")
    else:
        print(">>> Interpreter is running traditional GIL mode")
else:
    print(">>> Cannot detect runtime GIL status (requires Python 3.13+)")

NUM_THREADS = 8
CALLS_PER_THREAD = 1000000

errors = 0  # pylint: disable=invalid-name
error_lock = threading.Lock()

def worker(thread_id):
    """Subthreading for test."""
    global errors  # pylint: disable=global-statement
    local_errors = 0
    local_success = 0

    for j in range(CALLS_PER_THREAD):
        try:
            if (not isinstance(PyCTP.THOST_TERT_RESTART, int)
                or PyCTP.THOST_TERT_RESTART != 0):
                local_errors += 1
                continue
            
            if (not isinstance(PyCTP.THOST_TERT_RESUME_FROM_SEQ_NO, int)
                or PyCTP.THOST_TERT_RESUME_FROM_SEQ_NO != 4):
                local_errors += 1
                continue                

            local_success += 1
        except Exception as e:  # pylint: disable=broad-exception-caught
            local_errors += 1
            print(f"[Thread {thread_id}] Exception at loop {j}: {e}")
    with error_lock:
        errors += local_errors
    print(f"[Thread {thread_id}] Done. Success: {local_success}, "
          f"Errors: {local_errors}")

print(f"Starting stress test: {NUM_THREADS} threads x {CALLS_PER_THREAD} "
      f"calls each.")
print(f"Total expected calls: {NUM_THREADS * CALLS_PER_THREAD:,}")
print("=" * 50)

start_time = time.perf_counter()

threads = []
for i in range(NUM_THREADS):
    t = threading.Thread(target=worker, args=(i,))
    threads.append(t)
    t.start()

for t in threads:
    t.join()

end_time = time.perf_counter()
elapsed = end_time - start_time

total_calls = NUM_THREADS * CALLS_PER_THREAD
avg_se = elapsed / total_calls
avg_ms = avg_se * 1000
avg_us = avg_se * 1_000_000
avg_ns = avg_se * 1_000_000_000

print("=" * 50)
print(f"Total errors: {errors}")
print(f"Total time: {elapsed:.2f} seconds")
print(f"Calls per second: {total_calls  / elapsed:.0f}")
print("-" * 30)
print("Average time per call:")
print(f"  {avg_se:.9f} s")
print(f"  {avg_ms:.6f} ms")
print(f"  {avg_us:.3f} us")
print(f"  {avg_ns:.1f} ns")

