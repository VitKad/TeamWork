#ifndef ANNUALREPORT_H  
#define ANNUALREPORT_H   
#include "ProfitList.h"
#include "ExpenseList.h"

class AnnualReport // Класс годового отчета
{
private:  ProfitList* ptrPL;  //указатель на таблицу доходов       
		  ExpenseList* ptrER;  //указатель на таблицу расходов 
		  float expenses; //сумма расходоы
		  float prof; //сумма доходов 

public:  AnnualReport(ProfitList*, ExpenseList*);
		 void display();  //отображение на экране
};
#endif  


