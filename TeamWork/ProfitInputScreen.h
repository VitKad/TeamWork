
#ifndef PROFITINPUTSCREEN_H    
#define PROFITINPUTSCREEN_H   
#include "ClientList.h"
#include "ProfitList.h"
#include <string> 

using namespace std;
class ProfitInputScreen
{
private:
	ClientList* ptrClientList;     
	ProfitList* ptrProfitList;
	string addName; 
	int addPriceCloth;
	int addPriceService;
	string addDatePrice;
public:
	ProfitInputScreen(ClientList* ptrCL, ProfitList* ptrPL) : ptrClientList(ptrCL), ptrProfitList(ptrPL)
	{
	}
	void setProfit(); 
};
#endif