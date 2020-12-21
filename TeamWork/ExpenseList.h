#ifndef EXPENSELIST_H    
#define EXPENSELIST_H   
#include <vector> 
#include "Expense.h"

class ExpenseList
{
private:
	vector<Expense*> vectPtrsExpenses;
	vector<Expense*>::iterator iter;
public:
	~ExpenseList();
	void insertExp(Expense*);
	void display();
	float getSumOfExpenses();
};

#endif 