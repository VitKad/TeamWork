
#ifndef PROFITINPUTSCREEN_H    
#define PROFITINPUTSCREEN_H   
#include "ClientList.h"
#include "ProfitList.h"
#include <string> 

using namespace std;
class ProfitInputScreen //����� ������ ����� �������
{
private:
	ProfitList* ptrProfitList; //��������� �� ������� �������
	string addName; //��� ������� ������� �������������
	float addPriceCloth; //��������� ������ ������� �������������
	float addPriceService; //��������� ������ ������� �������������
	string addDatePrice; //���� ������ ������� �������������
public:
	ProfitInputScreen(ProfitList* ptrPL) : ptrProfitList(ptrPL)
	{
	}
	void setProfit();  //���� �������
};
#endif