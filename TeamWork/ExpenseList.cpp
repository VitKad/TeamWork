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

void ExpenseList::insertExp(Expense* ptrExp)   //добавление в таблицу расходов
{
	vectPtrsExpenses.push_back(ptrExp);
}

void ExpenseList::display()      //отображение на экране данных о расходах          
{
	cout << "\nКатегория          |Получатель              |Дата                    |Сумма\n";
	cout << "------------------------------------------------------------------------------------------------\n";
	if (vectPtrsExpenses.size() == 0) 
		cout << "---Расходов нет---\n" << endl;
	else
	{
		iter = vectPtrsExpenses.begin();
		while (iter != vectPtrsExpenses.end())
		{  
			cout << std::setw(15) << (*iter)->category << "    |     " << std::setw(15) << (*iter)->payee << "    |     " << std::setw(15) << (*iter)->datePay << "    |     " << std::setw(15) << (*iter)->amount << endl;
			iter++;
		}
		cout << endl;
	}
}

float ExpenseList::getSumOfExpenses()   //общая сумма доходов
{
	float totalExpenses = 0; 
	if (vectPtrsExpenses.size() == 0)
	{
		cout << "Расходов нет\n";
		return 0;
	}
	iter = vectPtrsExpenses.begin();
	while (iter != vectPtrsExpenses.end())
	{
		cout << std::setw(15) << ((*iter)->category) << "    | " << std::setw(15) << ((*iter)->amount) << endl;
		totalExpenses += (*iter)->amount;    
		iter++;
	}
	return totalExpenses;
}
