/*************************************************************************************
  FileName: SmartFrame\lib\libbusiness\include\BSSubsLoginChk.h
  Author:   lizhipeng
  Version : 1.0.0.0
  Date:2017/12/31
  Description: 
  History: 
*************************************************************************************/

#ifndef   BSSUBSLOGINCHK_H_FILE
#define   BSSUBSLOGINCHK_H_FILE

#include "Json.h"
#include "string.h"

class CBSSubsLoginChk
{
public:
	CBSSubsLoginChk();
	~CBSSubsLoginChk();

	bool SubsPswdChk(CJson jsSubsInfo);
private:

};

#endif