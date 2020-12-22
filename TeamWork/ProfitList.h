#ifndef PROFITLIST_H   
#define PROFITLIST_H   
#include <list> 
#include "Profit.h"
 
class ProfitList  //таблица доходов
{
private:

	list <Profit*> setPtrsRR;  //список указатель на доходы
	list <Profit*>::iterator iter; //итератор
public:
	~ProfitList();
	void insertProfit(Profit*);   //добавление в таблицу доходов
	void display();         //отображение на экране           
	float getSumOfProfits();   //сумма всех доходов
};

#endif  