/*************************************************************************************
  FileName: SmartFrame\src\Library.h
  Author:   lizhipeng
  Version : 1.0.0.0
  Date:2017/12/10
  Description: 
  History: 
*************************************************************************************/

#ifndef   LIBRARY_H_FILE
#define   LIBRARY_H_FILE

#include "public.h"
#include "BaseEntry.h"
#include "MpDll.h"

typedef CBaseEntry *(BaseEntry)();

#ifndef WIN32
typedef void* HMODULE;
#endif

class CLibrary
{
public:
	CLibrary();
	~CLibrary();

	//��������
	bool LibLoad(const char* pszLibPath);

	//ִ������Ŀ������߼�
	bool LibExecute();
private:

	//��������ʽӿ�ָ�����
	BaseEntry *m_pEntry;
};

#endif