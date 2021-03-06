/*************************************************************************************
  FileName: SmartFrame\src\BaseEntry.h
  Author:   lizhipeng
  Version : 1.0.0.0
  Date:2017/11/24
  Description: 条带入口基类
  History: 
*************************************************************************************/

#ifndef   BASEENTRY_H_FILE
#define   BASEENTRY_H_FILE

#ifdef _WIN32
#define DLLIMP __declspec(dllimport)
#define DLLEXP __declspec(dllexport)
#else
#define DLLIMP 
#define DLLEXP
#endif

#include "ProtoImpl.h"

class CBaseEntry
{
public:
	CBaseEntry(){};
	~CBaseEntry(){};
	virtual void execute(CProtoImpl *pProtoImpl) = 0;
private:
};

#endif
