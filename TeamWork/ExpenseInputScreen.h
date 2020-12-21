#ifndef EXPENSEINPUTSCREEN_H   
#define EXPENSEINPUTSCREEN_H  
#include "ExpenseList.h"

class ExpenseInputScreen
{
private:
	ExpenseList* ptrExpenseList; 
public:  ExpenseInputScreen(ExpenseList*);
		 void setExpense();
};

#endif 


