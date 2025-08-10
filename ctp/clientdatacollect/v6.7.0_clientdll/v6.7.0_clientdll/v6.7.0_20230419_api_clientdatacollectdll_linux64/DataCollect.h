#ifndef  DATA_COLLECT_H
#define  DATA_COLLECT_H

#define DLL_EXPORT   __declspec(dllexport)

#if defined(IS_WINCOLLECT_LIB) && defined(WIN32)
#ifdef LIB_DATA_COLLECT_API_EXPORT
#define DATA_COLLECT_API_EXPORT __declspec(dllexport)
#else
#define DATA_COLLECT_API_EXPORT __declspec(dllimport)
#endif
#else
#define DATA_COLLECT_API_EXPORT 
#endif



///��ȡAES���ܺ�RSA���ܵ��ն���Ϣ pSystemInfo�Ŀռ���Ҫ�������Լ����� ����270���ֽ�
/// windows����ֵ����
/* ���ص�intֵ ��Ϊ0 ��ʾ�ɼ���Ϣ���� �����ĸ��ɼ�����������Ҫ�������ж�
�ӵ�λ��ʼ�ֱ��ʾ �ն���Ϣ ->ϵͳ�̷�����Ϣ
����ֵ & ��0x01 << 0�� ��Ϊ0 ��ʾ�ն�����δ�ɼ���
����ֵ & ��0x01 << 1�� ��Ϊ0 ��ʾ ��Ϣ�ɼ�ʱ���ȡ�쳣
����ֵ & ��0x01 << 2�� ��Ϊ0 ��ʾip ��ȡʧ��  ���ɼ������ͬ������Ϣ�ĳ�����һ���ɼ��� ����ʾ�ɼ��ɹ���
����ֵ & ��0x01 << 3�� ��Ϊ0 ��ʾmac ��ȡʧ��
����ֵ & ��0x01 << 4�� ��Ϊ0 ��ʾ �豸�� ��ȡʧ��
����ֵ & ��0x01 << 5�� ��Ϊ0 ��ʾ ����ϵͳ�汾 ��ȡʧ��
����ֵ & ��0x01 << 6�� ��Ϊ0 ��ʾ Ӳ�����к� ��ȡʧ��
����ֵ & ��0x01 << 7�� ��Ϊ0 ��ʾ CPU���к� ��ȡʧ��
����ֵ & ��0x01 << 8�� ��Ϊ0 ��ʾ BIOS ��ȡʧ��
����ֵ & ��0x01 << 9�� ��Ϊ0 ��ʾ ϵͳ�̷�����Ϣ ��ȡʧ��
*/

/// linux����ֵ����
/* ���ص�intֵ ��Ϊ0 ��ʾ�ɼ���Ϣ���� �����ĸ��ɼ�����������Ҫ�������ж�
�ӵ�λ��ʼ�ֱ��ʾ �ն���Ϣ -> BIOS��Ϣ
����ֵ & ��0x01 << 0�� ��Ϊ0 ��ʾ�ն�����δ�ɼ���
����ֵ & ��0x01 << 1�� ��Ϊ0 ��ʾ ��Ϣ�ɼ�ʱ���ȡ�쳣
����ֵ & ��0x01 << 2�� ��Ϊ0 ��ʾip ��ȡʧ��  ���ɼ������ͬ������Ϣ�ĳ�����һ���ɼ��� ����ʾ�ɼ��ɹ���
����ֵ & ��0x01 << 3�� ��Ϊ0 ��ʾmac ��ȡʧ��
����ֵ & ��0x01 << 4�� ��Ϊ0 ��ʾ �豸�� ��ȡʧ��
����ֵ & ��0x01 << 5�� ��Ϊ0 ��ʾ ����ϵͳ�汾 ��ȡʧ��
����ֵ & ��0x01 << 6�� ��Ϊ0 ��ʾ Ӳ�����к� ��ȡʧ��
����ֵ & ��0x01 << 7�� ��Ϊ0 ��ʾ CPU���к� ��ȡʧ��
����ֵ & ��0x01 << 8�� ��Ϊ0 ��ʾ BIOS ��ȡʧ��
*/

DATA_COLLECT_API_EXPORT int CTP_GetSystemInfo(char* pSystemInfo, int& nLen);


//�汾�Ÿ�ʽ
//Sfit + �������ǲ�����Կ(pro/tst) + ��Կ�汾 + ����ʱ�� + �汾(�ڲ�)

DATA_COLLECT_API_EXPORT const char * CTP_GetDataCollectApiVersion(void);


#endif
