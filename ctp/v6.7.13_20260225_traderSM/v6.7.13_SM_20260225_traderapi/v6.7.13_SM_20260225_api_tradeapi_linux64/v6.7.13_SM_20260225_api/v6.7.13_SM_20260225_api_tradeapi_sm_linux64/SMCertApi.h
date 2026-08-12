#ifndef __CTPSMCERTSDK_H
#define __CTPSMCERTSDK_H

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

/* SDK 错误码 */
#define SMCERTSDK_ERR_NONE                    0                             /* 成功 */
#define SMCERTSDK_ERR_BASE                    0x0A000000                    /* 错误码 */
#define SMCERTSDK_ERR_FAILED                  (SMCERTSDK_ERR_BASE + 0x0001)     /* 失败 */
#define SMCERTSDK_ERR_LOCALRETRY              (SMCERTSDK_ERR_BASE + 0x0002)     /* 本地主动调用异步接口重试 */

#define SMCERTSDK_ERR_INTERNAL_UNKNOWN        (SMCERTSDK_ERR_BASE + 0x0100)     /* 内部未知错误 */
#define SMCERTSDK_ERR_INTERNAL_GENKEY         (SMCERTSDK_ERR_BASE + 0x0101)     /* 产生密钥对失败 */
#define SMCERTSDK_ERR_INTERNAL_DIGEST         (SMCERTSDK_ERR_BASE + 0x0102)     /* 摘要失败 */
#define SMCERTSDK_ERR_INTERNAL_BASE64         (SMCERTSDK_ERR_BASE + 0x0103)     /* base64编码失败 */
#define SMCERTSDK_ERR_INTERNAL_RANDOM         (SMCERTSDK_ERR_BASE + 0x0104)     /* 产生随机数失败 */
#define SMCERTSDK_ERR_INTERNAL_XTSIGN         (SMCERTSDK_ERR_BASE + 0x0105)     /* 协同签名失败 */

#define SMCERTSDK_ERR_PARAM_NULL              (SMCERTSDK_ERR_BASE + 0x0200)     /* 空参数 */
#define SMCERTSDK_ERR_PARAM_INVALID           (SMCERTSDK_ERR_BASE + 0x0201)     /* 参数非法 */
#define SMCERTSDK_ERR_PARAM_BUFFER_SMALL      (SMCERTSDK_ERR_BASE + 0x0202)     /* 缓冲区太小 */

#define SMCERTSDK_ERR_NETWORK_CONNECT         (SMCERTSDK_ERR_BASE + 0x0300)     /* 连接出错 */
#define SMCERTSDK_ERR_NETWORK_REQUEST         (SMCERTSDK_ERR_BASE + 0x0301)     /* 请求错误 */
#define SMCERTSDK_ERR_NETWORK_RESPONSE        (SMCERTSDK_ERR_BASE + 0x0302)     /* 响应错误 */

#define SMCERTSDK_ERR_STORE_UNKNOWN     (SMCERTSDK_ERR_BASE + 0x0400)     /* 存储未知错误 */
#define SMCERTSDK_ERR_PIN_INCORRECT     (SMCERTSDK_ERR_BASE + 0x0401)     /* PIN 不正确 */
#define SMCERTSDK_ERR_PIN_LOCKED        (SMCERTSDK_ERR_BASE + 0x0402)     /* PIN 已锁定 */
#define SMCERTSDK_ERR_CERT_NOT_EXISTS   (SMCERTSDK_ERR_BASE + 0x0403)     /* 本地证书不存在 */
#define SMCERTSDK_ERR_CERT_EXPIRED      (SMCERTSDK_ERR_BASE + 0x0404)     /* 证书过期 */
#define SMCERTSDK_ERR_CERT_OVERLIMIT    (SMCERTSDK_ERR_BASE + 0x0405)     /* 证书个数超限 */
#define SMCERTSDK_ERR_CERT_INVALID      (SMCERTSDK_ERR_BASE + 0x0406)     /* 证书无效，以及其他未定义错误 */
#define SMCERTSDK_ERR_USER_PASS		    (SMCERTSDK_ERR_BASE + 0x0407)     /* 错误的用户名或密码 */
#define SMCERTSDK_ERR_PIN_WRONGFORMAT   (SMCERTSDK_ERR_BASE + 0x0408)     /* PIN码格式不正确 */
#define SMCERTSDK_ERR_USER_LOCKED       (SMCERTSDK_ERR_BASE + 0x0409)     /* 用户登录错误次数过多，账户已锁定 */

/* SSL错误码 */
#define SMSSLCERT_ERROR_NONE                  0       /* 操作成功 */
#define SMSSLCERT_ERROR_SSL                   1       /* SSL错误 */
#define SMSSLCERT_ERROR_WANT_READ             2       /* 读阻塞 */
#define SMSSLCERT_ERROR_WANT_WRITE            3       /* 写阻塞 */
#define SMSSLCERT_ERROR_SYSCALL               5       /* 系统中断 */
#define SMSSLCERT_ERROR_ZERO_RETURN           6       /* SSL连接关闭 */
#define SMSSLCERT_ERROR_WANT_CONNECT          7       /* 连接阻塞 */
#define SMSSLCERT_ERROR_WANT_ACCEPT           8       /* 监听阻塞 */

/*
说明：
1. 用户本地证书路径，为用户数据目录下（Windows和Linux都是如此）
如系统登录用户名为UserXXX，证书路径为：
Windows： 
		C:\Users\UserXXX\AppData\Roaming\koal\smkdata${BrokerName} （格尔）
		C:\Users\UserXXX\AppData\Roaming\ifs\smidata${BrokerName}  （信安）
		C:\Users\UserXXX\AppData\Roaming\syd\smsdata${BrokerName}  （信雅达）
Linux： 		  
		/home/UserXXX/koal/smkdata${BrokerName} （格尔）
		/home/UserXXX/ifs/smidata${BrokerName} （信安）
		/home/UserXXX/syd/smsdata${BrokerName} （信雅达）
		  
*/

/* 证书、签名验签配置 */
typedef struct SMCertUserConfig_s {
    const char  *BrokerID;          /* 用户的 broker id */
	const char  *BrokerName;        /* 用户的期货公司名称，只支持数字与字母；拼接在用户证书目录sm*data后；可以为空，最大长度30 */
    const char  *UserID;            /* 用户的 user id */
	const char  *Pin;				/* 用户的本地PIN码 */
	const char  *Password;			/* 用户的密码，用于用户下证校验 */
	const char  *CertHost;         /* 协同签名服务器地址 */
    int          CertPort;         /* 协同签名服务端端口 */
	int          CertSocket;       /* 该字段为预留字段：同步通讯模式，填-1; 异步通讯模式时传入协同签名服务socket；目前厂商API仅支持同步 */
    int          TimeoutMs;         /* 连接超时时间（毫秒）*/
} SMCertUserConfig_t;


/* 证书信息 */
typedef struct SMCert_s {
	char CertID[50];	/* 证书唯一标识，该字段为自定义的唯一标识，作为该用户证书的唯一证书标识*/
	char UserID[30];	/* 用户ID，该字段为创建句柄时传入的UserID */
	char DeviceID[100];	/* 设备标识，该字段为自定义的唯一标识，作为该用户在在该设备上的唯一设备标识 */
	char CertInfo[1024];/* 证书信息，该字段内容为证书的证书主题，证书主题的每个字段间用'/'分隔 */
	int  IsCurrent;     /* 是否为当前设备证书, 1:是 0:否 */
} SMCert_t;



/* SDK句柄 */
typedef void * SMCertSDK_t;

/*
 * 返回当前API版本
 *
 * @return const char * 
 */
const char * SMCertSDK_GetVersion();

/**
 * @brief SDK全局初始化
 *
 * 程序开始运行后，一个进程内，SDK需要且仅需要一次全局初始化
 * 一般用于加载第三方的dll等操作
 * @param LogFile  [in] 错误日志文件（为空则不记录错误日志）
 * @return int	   成功返回 SMCERTSDK_ERR_NONE
 *                 失败返回错误码
 */
int SMCertSDK_Init(const char *LogFile);

/**
 * @brief SDK全局初始化清理
 *
 * 程序结束运行前，SDK需要且仅需要一次全局初始化的清理
 *
 * @return int  成功返回 SMCERTSDK_ERR_NONE
 *              失败返回错误码
 */
int SMCertSDK_Clean(void);

/**
 * @brief 创建句柄
 * 
 * 一个句柄只需调用一次。
 * 客户端调用时，如用户名可能发生改变，应调用SMCertSDK_Free释放原句柄后，重新调用该函数生成新句柄使用。
 *
 * @param Config  [in] 用户参数配置
 * @param hSDK    [out] 句柄
 * @return int    成功返回 SMCERTSDK_ERR_NONE
 *                失败返回错误码
 */
int SMCertSDK_New(const SMCertUserConfig_t *Config, SMCertSDK_t *hSDK);

/**
 * @brief 释放句柄
 *
 * 释放SDK句柄。
 *
 * @param hSDK  [in] SDK句柄
 * @return int  成功返回 SMCERTSDK_ERR_NONE
 *              失败返回错误码
 */
int SMCertSDK_Free(SMCertSDK_t hSDK);


/**
 * @brief 申请用户证书，并设置用户PIN码，PIN码长度不能小于6位
 *
 *
 * 如果本地有有效证书，厂商API需校验PIN
 * 如PIN校验失败，返回SMCERTSDK_ERR_PIN_INCORRECT
 * 如无有效证书，直接继续签发证书流程
 *
 * 无有效证书时，后台需校验用户密码
 * 若后台校验PASSWORD失败，返回SMCERTSDK_ERR_USER_PASS
 * 若后台校验PASSWORD成功，继续签发证书流程
 * 
 *
 * @param hSDK		[in] SDK句柄
 * @return int   成功返回 SMCERTSDK_ERR_NONE
 *				PIN码长度小于6位 SMCERTSDK_ERR_PIN_WRONGFORMAT
 *              网络IO阻塞返回 SMSSLCERT_ERROR_WANT_READ/SMSSLCERT_ERROR_WANT_WRITE
 *				本地IO阻塞返回 SMCERTSDK_ERR_LOCALRETRY
 *              失败返回错误码
 *
 */
int SMCertSDK_CertEnroll(SMCertSDK_t hSDK);


/**
 * @brief 延期本设备用户证书
 *
 * 后台需校验用户密码
 * 若后台校验PASSWORD失败，返回SMCERTSDK_ERR_USER_PASS
 * 若后台校验PASSWORD成功，才可以继续延期证书。
 *
 * 国密厂商API内需校验PIN（存储于hSDK句柄中），若PIN校验错达到10次，锁定PIN码，返回SMCERTSDK_ERR_PIN_LOCKED错误码
 *
 * @param hSDK		[in] SDK句柄
 * @return int  成功返回 SMCERTSDK_ERR_NONE
 *              网络IO阻塞返回 SMSSLCERT_ERROR_WANT_READ/SMSSLCERT_ERROR_WANT_WRITE
 *				本地IO阻塞返回 SMCERTSDK_ERR_LOCALRETRY
 *              失败返回错误码
 *
 */
int SMCertSDK_CertDelay(SMCertSDK_t hSDK);



/**
 * @brief 查询用户服务端所有有效的证书信息，已过期或已作废的证书不返回；
 *
 * 允许用户在登录之前调用，查询出自己的证书，以告知后台管理员证书信息，注销服务端证书。
 * 后台需校验用户密码
 * 若后台校验PASSWORD失败，返回SMCERTSDK_ERR_USER_PASS
 * 若后台校验PASSWORD成功，才可以继续查询证书。
 *
 * pCert指针指向的内存，由厂商dll内部申请； 在SMCertSDK_Free调用后，厂商dll内释放该内存
 * 如多次调用该接口，厂商dll内会重新申请内存导出
 *
 * @param hSDK		[in] SDK句柄
 * @param pCert [out] 该用户名下所有证书
 * @param total [out] 该用户名下所有证书个数
 * @return int
 *
 */
int SMCertSDK_CertQuery(SMCertSDK_t hSDK, const SMCert_t **pCert, int *total);

/**
 * @brief 废弃用户证书
 *
 * 用户登录成功后，才允许废除操作。
 *
 * 后台需校验用户密码
 * 若后台校验PASSWORD失败，返回SMCERTSDK_ERR_USER_PASS
 * 若后台校验PASSWORD成功，才可以继续废弃证书。
 *
 * 国密厂商API内需校验PIN（存储于hSDK句柄中），若PIN校验错达到10次，锁定PIN码，返回SMCERTSDK_ERR_PIN_LOCKED错误码
 *
 * @param hSDK		[in] SDK句柄
 * @param CertID	[in] 证书唯一标识
 * @return int  成功返回 SMCERTSDK_ERR_NONE
 *              网络IO阻塞返回 SMSSLCERT_ERROR_WANT_READ/SMSSLCERT_ERROR_WANT_WRITE
 *				本地IO阻塞返回 SMCERTSDK_ERR_LOCALRETRY
 *              失败返回错误码
 *
 */
int SMCertSDK_CertRevoke(SMCertSDK_t hSDK, const char *CertID);


/**
 * @brief 重置PIN
 *
 * 后台需校验用户密码
 * 若后台校验PASSWORD失败，返回SMCERTSDK_ERR_USER_PASS
 * 若后台校验PASSWORD成功，才可继续重置PIN。
 *
 * 不校验旧的PIN，只重置本地证书PIN 
 *
 * @param hSDK		[in] SDK句柄
 * @param NewPIN	[in] 新的PIN码
 * @return int  成功返回 SMCERTSDK_ERR_NONE
 *				PIN码长度小于6位 SMCERTSDK_ERR_PIN_WRONGFORMAT
 *              失败返回错误码
 *
 */
int SMCertSDK_ResetPin(SMCertSDK_t hSDK, const char *NewPIN);

#ifdef __cplusplus
}
#endif // __cplusplus

#endif // __CTPSMCERTSDK_H
