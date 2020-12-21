#include "stdafx.h" 
#include "ExpenseList.h" 

ExpenseList::~ExpenseList() 
{
	while (!vectPtrsExpenses.empty())
	{
		iter = vectPtrsExpenses.begin();
		delete *iter;
		vectPtrsExpenses.erase(iter);
	}
}

void ExpenseList::insertExp(Expense* ptrExp)
{
	vectPtrsExpenses.push_back(ptrExp);
}


