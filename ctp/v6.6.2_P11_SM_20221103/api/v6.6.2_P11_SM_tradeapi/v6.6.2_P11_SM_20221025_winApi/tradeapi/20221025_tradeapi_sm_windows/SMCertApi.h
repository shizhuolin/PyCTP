#ifndef __CTPSMCERTSDK_H
#define __CTPSMCERTSDK_H

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

/* SDK ������ */
#define SMCERTSDK_ERR_NONE                    0                             /* �ɹ� */
#define SMCERTSDK_ERR_BASE                    0x0A000000                    /* ������ */
#define SMCERTSDK_ERR_FAILED                  (SMCERTSDK_ERR_BASE + 0x0001)     /* ʧ�� */
#define SMCERTSDK_ERR_LOCALRETRY              (SMCERTSDK_ERR_BASE + 0x0002)     /* �������������첽�ӿ����� */

#define SMCERTSDK_ERR_INTERNAL_UNKNOWN        (SMCERTSDK_ERR_BASE + 0x0100)     /* �ڲ�δ֪���� */
#define SMCERTSDK_ERR_INTERNAL_GENKEY         (SMCERTSDK_ERR_BASE + 0x0101)     /* ������Կ��ʧ�� */
#define SMCERTSDK_ERR_INTERNAL_DIGEST         (SMCERTSDK_ERR_BASE + 0x0102)     /* ժҪʧ�� */
#define SMCERTSDK_ERR_INTERNAL_BASE64         (SMCERTSDK_ERR_BASE + 0x0103)     /* base64����ʧ�� */
#define SMCERTSDK_ERR_INTERNAL_RANDOM         (SMCERTSDK_ERR_BASE + 0x0104)     /* ���������ʧ�� */
#define SMCERTSDK_ERR_INTERNAL_XTSIGN         (SMCERTSDK_ERR_BASE + 0x0105)     /* Эͬǩ��ʧ�� */

#define SMCERTSDK_ERR_PARAM_NULL              (SMCERTSDK_ERR_BASE + 0x0200)     /* �ղ��� */
#define SMCERTSDK_ERR_PARAM_INVALID           (SMCERTSDK_ERR_BASE + 0x0201)     /* �����Ƿ� */
#define SMCERTSDK_ERR_PARAM_BUFFER_SMALL      (SMCERTSDK_ERR_BASE + 0x0202)     /* ������̫С */

#define SMCERTSDK_ERR_NETWORK_CONNECT         (SMCERTSDK_ERR_BASE + 0x0300)     /* ���ӳ��� */
#define SMCERTSDK_ERR_NETWORK_REQUEST         (SMCERTSDK_ERR_BASE + 0x0301)     /* ������� */
#define SMCERTSDK_ERR_NETWORK_RESPONSE        (SMCERTSDK_ERR_BASE + 0x0302)     /* ��Ӧ���� */

#define SMCERTSDK_ERR_STORE_UNKNOWN     (SMCERTSDK_ERR_BASE + 0x0400)     /* �洢δ֪���� */
#define SMCERTSDK_ERR_PIN_INCORRECT     (SMCERTSDK_ERR_BASE + 0x0401)     /* PIN ����ȷ */
#define SMCERTSDK_ERR_PIN_LOCKED        (SMCERTSDK_ERR_BASE + 0x0402)     /* PIN ������ */
#define SMCERTSDK_ERR_CERT_NOT_EXISTS   (SMCERTSDK_ERR_BASE + 0x0403)     /* ����֤�鲻���� */
#define SMCERTSDK_ERR_CERT_EXPIRED      (SMCERTSDK_ERR_BASE + 0x0404)     /* ֤����� */
#define SMCERTSDK_ERR_CERT_OVERLIMIT    (SMCERTSDK_ERR_BASE + 0x0405)     /* ֤��������� */
#define SMCERTSDK_ERR_CERT_INVALID      (SMCERTSDK_ERR_BASE + 0x0406)     /* ֤����Ч���Լ�����δ������� */
#define SMCERTSDK_ERR_USER_PASS		    (SMCERTSDK_ERR_BASE + 0x0407)     /* ������û��������� */
#define SMCERTSDK_ERR_PIN_WRONGFORMAT   (SMCERTSDK_ERR_BASE + 0x0408)     /* PIN���ʽ����ȷ */
#define SMCERTSDK_ERR_USER_LOCKED       (SMCERTSDK_ERR_BASE + 0x0409)     /* �û���¼����������࣬�˻������� */

/* SSL������ */
#define SMSSLCERT_ERROR_NONE                  0       /* �����ɹ� */
#define SMSSLCERT_ERROR_SSL                   1       /* SSL���� */
#define SMSSLCERT_ERROR_WANT_READ             2       /* ������ */
#define SMSSLCERT_ERROR_WANT_WRITE            3       /* д���� */
#define SMSSLCERT_ERROR_SYSCALL               5       /* ϵͳ�ж� */
#define SMSSLCERT_ERROR_ZERO_RETURN           6       /* SSL���ӹر� */
#define SMSSLCERT_ERROR_WANT_CONNECT          7       /* �������� */
#define SMSSLCERT_ERROR_WANT_ACCEPT           8       /* �������� */

/*
˵����
1. �û�����֤��·����Ϊ�û�����Ŀ¼�£�Windows��Linux������ˣ�
��ϵͳ��¼�û���ΪUserXXX��֤��·��Ϊ��
Windows�� 
		C:\Users\UserXXX\AppData\Roaming\koal\smkdata${BrokerName} �������
		C:\Users\UserXXX\AppData\Roaming\ifs\smidata${BrokerName}  ���Ű���
		C:\Users\UserXXX\AppData\Roaming\syd\smsdata${BrokerName}  �����Ŵ
Linux�� 		  
		/home/UserXXX/koal/smkdata${BrokerName} �������
		/home/UserXXX/ifs/smidata${BrokerName} ���Ű���
		/home/UserXXX/syd/smsdata${BrokerName} �����Ŵ
		  
*/

/* ֤�顢ǩ����ǩ���� */
typedef struct SMCertUserConfig_s {
    const char  *BrokerID;          /* �û��� broker id */
	const char  *BrokerName;        /* �û����ڻ���˾���ƣ�ֻ֧����������ĸ��ƴ�����û�֤��Ŀ¼sm*data�󣻿���Ϊ�գ���󳤶�30 */
    const char  *UserID;            /* �û��� user id */
	const char  *Pin;				/* �û��ı���PIN�� */
	const char  *Password;			/* �û������룬�����û���֤У�� */
	const char  *CertHost;         /* Эͬǩ����������ַ */
    int          CertPort;         /* Эͬǩ������˶˿� */
	int          CertSocket;       /* ���ֶ�ΪԤ���ֶΣ�ͬ��ͨѶģʽ����-1; �첽ͨѶģʽʱ����Эͬǩ������socket��Ŀǰ����API��֧��ͬ�� */
    int          TimeoutMs;         /* ���ӳ�ʱʱ�䣨���룩*/
} SMCertUserConfig_t;


/* ֤����Ϣ */
typedef struct SMCert_s {
	char CertID[50];	/* ֤��Ψһ��ʶ�����ֶ�Ϊ�Զ����Ψһ��ʶ����Ϊ���û�֤���Ψһ֤���ʶ*/
	char UserID[30];	/* �û�ID�����ֶ�Ϊ�������ʱ�����UserID */
	char DeviceID[100];	/* �豸��ʶ�����ֶ�Ϊ�Զ����Ψһ��ʶ����Ϊ���û����ڸ��豸�ϵ�Ψһ�豸��ʶ */
	char CertInfo[1024];/* ֤����Ϣ�����ֶ�����Ϊ֤���֤�����⣬֤�������ÿ���ֶμ���'/'�ָ� */
	int  IsCurrent;     /* �Ƿ�Ϊ��ǰ�豸֤��, 1:�� 0:�� */
} SMCert_t;



/* SDK��� */
typedef void * SMCertSDK_t;

/*
 * ���ص�ǰAPI�汾
 *
 * @return const char * 
 */
const char * SMCertSDK_GetVersion();

/**
 * @brief SDKȫ�ֳ�ʼ��
 *
 * ����ʼ���к�һ�������ڣ�SDK��Ҫ�ҽ���Ҫһ��ȫ�ֳ�ʼ��
 * һ�����ڼ��ص�������dll�Ȳ���
 * @param LogFile  [in] ������־�ļ���Ϊ���򲻼�¼������־��
 * @return int	   �ɹ����� SMCERTSDK_ERR_NONE
 *                 ʧ�ܷ��ش�����
 */
int SMCertSDK_Init(const char *LogFile);

/**
 * @brief SDKȫ�ֳ�ʼ������
 *
 * �����������ǰ��SDK��Ҫ�ҽ���Ҫһ��ȫ�ֳ�ʼ��������
 *
 * @return int  �ɹ����� SMCERTSDK_ERR_NONE
 *              ʧ�ܷ��ش�����
 */
int SMCertSDK_Clean(void);

/**
 * @brief �������
 * 
 * һ�����ֻ�����һ�Ρ�
 * �ͻ��˵���ʱ�����û������ܷ����ı䣬Ӧ����SMCertSDK_Free�ͷ�ԭ��������µ��øú��������¾��ʹ�á�
 *
 * @param Config  [in] �û���������
 * @param hSDK    [out] ���
 * @return int    �ɹ����� SMCERTSDK_ERR_NONE
 *                ʧ�ܷ��ش�����
 */
int SMCertSDK_New(const SMCertUserConfig_t *Config, SMCertSDK_t *hSDK);

/**
 * @brief �ͷž��
 *
 * �ͷ�SDK�����
 *
 * @param hSDK  [in] SDK���
 * @return int  �ɹ����� SMCERTSDK_ERR_NONE
 *              ʧ�ܷ��ش�����
 */
int SMCertSDK_Free(SMCertSDK_t hSDK);


/**
 * @brief �����û�֤�飬�������û�PIN�룬PIN�볤�Ȳ���С��6λ
 *
 *
 * �����������Ч֤�飬����API��У��PIN
 * ��PINУ��ʧ�ܣ�����SMCERTSDK_ERR_PIN_INCORRECT
 * ������Ч֤�飬ֱ�Ӽ���ǩ��֤������
 *
 * ����Ч֤��ʱ����̨��У���û�����
 * ����̨У��PASSWORDʧ�ܣ�����SMCERTSDK_ERR_USER_PASS
 * ����̨У��PASSWORD�ɹ�������ǩ��֤������
 * 
 *
 * @param hSDK		[in] SDK���
 * @return int   �ɹ����� SMCERTSDK_ERR_NONE
 *				PIN�볤��С��6λ SMCERTSDK_ERR_PIN_WRONGFORMAT
 *              ����IO�������� SMSSLCERT_ERROR_WANT_READ/SMSSLCERT_ERROR_WANT_WRITE
 *				����IO�������� SMCERTSDK_ERR_LOCALRETRY
 *              ʧ�ܷ��ش�����
 *
 */
int SMCertSDK_CertEnroll(SMCertSDK_t hSDK);


/**
 * @brief ���ڱ��豸�û�֤��
 *
 * ��̨��У���û�����
 * ����̨У��PASSWORDʧ�ܣ�����SMCERTSDK_ERR_USER_PASS
 * ����̨У��PASSWORD�ɹ����ſ��Լ�������֤�顣
 *
 * ���ܳ���API����У��PIN���洢��hSDK����У�����PINУ���ﵽ10�Σ�����PIN�룬����SMCERTSDK_ERR_PIN_LOCKED������
 *
 * @param hSDK		[in] SDK���
 * @return int  �ɹ����� SMCERTSDK_ERR_NONE
 *              ����IO�������� SMSSLCERT_ERROR_WANT_READ/SMSSLCERT_ERROR_WANT_WRITE
 *				����IO�������� SMCERTSDK_ERR_LOCALRETRY
 *              ʧ�ܷ��ش�����
 *
 */
int SMCertSDK_CertDelay(SMCertSDK_t hSDK);



/**
 * @brief ��ѯ�û������������Ч��֤����Ϣ���ѹ��ڻ������ϵ�֤�鲻���أ�
 *
 * �����û��ڵ�¼֮ǰ���ã���ѯ���Լ���֤�飬�Ը�֪��̨����Ա֤����Ϣ��ע�������֤�顣
 * ��̨��У���û�����
 * ����̨У��PASSWORDʧ�ܣ�����SMCERTSDK_ERR_USER_PASS
 * ����̨У��PASSWORD�ɹ����ſ��Լ�����ѯ֤�顣
 *
 * pCertָ��ָ����ڴ棬�ɳ���dll�ڲ����룻 ��SMCertSDK_Free���ú󣬳���dll���ͷŸ��ڴ�
 * ���ε��øýӿڣ�����dll�ڻ����������ڴ浼��
 *
 * @param hSDK		[in] SDK���
 * @param pCert [out] ���û���������֤��
 * @param total [out] ���û���������֤�����
 * @return int
 *
 */
int SMCertSDK_CertQuery(SMCertSDK_t hSDK, const SMCert_t **pCert, int *total);

/**
 * @brief �����û�֤��
 *
 * �û���¼�ɹ��󣬲�����ϳ�������
 *
 * ��̨��У���û�����
 * ����̨У��PASSWORDʧ�ܣ�����SMCERTSDK_ERR_USER_PASS
 * ����̨У��PASSWORD�ɹ����ſ��Լ�������֤�顣
 *
 * ���ܳ���API����У��PIN���洢��hSDK����У�����PINУ���ﵽ10�Σ�����PIN�룬����SMCERTSDK_ERR_PIN_LOCKED������
 *
 * @param hSDK		[in] SDK���
 * @param CertID	[in] ֤��Ψһ��ʶ
 * @return int  �ɹ����� SMCERTSDK_ERR_NONE
 *              ����IO�������� SMSSLCERT_ERROR_WANT_READ/SMSSLCERT_ERROR_WANT_WRITE
 *				����IO�������� SMCERTSDK_ERR_LOCALRETRY
 *              ʧ�ܷ��ش�����
 *
 */
int SMCertSDK_CertRevoke(SMCertSDK_t hSDK, const char *CertID);


/**
 * @brief ����PIN
 *
 * ��̨��У���û�����
 * ����̨У��PASSWORDʧ�ܣ�����SMCERTSDK_ERR_USER_PASS
 * ����̨У��PASSWORD�ɹ����ſɼ�������PIN��
 *
 * ��У��ɵ�PIN��ֻ���ñ���֤��PIN 
 *
 * @param hSDK		[in] SDK���
 * @param NewPIN	[in] �µ�PIN��
 * @return int  �ɹ����� SMCERTSDK_ERR_NONE
 *				PIN�볤��С��6λ SMCERTSDK_ERR_PIN_WRONGFORMAT
 *              ʧ�ܷ��ش�����
 *
 */
int SMCertSDK_ResetPin(SMCertSDK_t hSDK, const char *NewPIN);

#ifdef __cplusplus
}
#endif // __cplusplus

#endif // __CTPSMCERTSDK_H
