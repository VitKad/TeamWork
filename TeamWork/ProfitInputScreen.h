
#ifndef PROFITINPUTSCREEN_H    
#define PROFITINPUTSCREEN_H   
#include "ClientList.h"
#include "ProfitList.h"
#include <string> 

using namespace std;
class ProfitInputScreen //класс экрана ввода доходов
{
private:
	ProfitList* ptrProfitList; //указатель на таблицу доходов
	string addName; //имя клиента введное пользователем
	float addPriceCloth; //стоимость стирки введная пользователем
	float addPriceService; //стоимость услуги введная пользователем
	string addDatePrice; //дата оплаты введное пользователем
public:
	ProfitInputScreen(ProfitList* ptrPL) : ptrProfitList(ptrPL)
	{
	}
	void setProfit();  //ввод доходов
};
#endif