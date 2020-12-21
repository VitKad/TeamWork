#ifndef ANNUALREPORT_H  
#define ANNUALREPORT_H   
#include "ProfitList.h"
#include "ExpenseList.h"

class AnnualReport
{
private:  ProfitList* ptrPL;         
		  ExpenseList* ptrER;  
		  float expenses, prof;   

public:  AnnualReport(ProfitList*, ExpenseList*);
		 void display(); 
};
#endif  


