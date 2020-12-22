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

void ExpenseList::insertExp(Expense* ptrExp)   //���������� � ������� ��������
{
	vectPtrsExpenses.push_back(ptrExp);
}

void ExpenseList::display()      //����������� �� ������ ������ � ��������          
{
	cout << "\n���������          |����������              |����                    |�����\n";
	cout << "------------------------------------------------------------------------------------------------\n";
	if (vectPtrsExpenses.size() == 0) 
		cout << "---�������� ���---\n" << endl;
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

float ExpenseList::getSumOfExpenses()   //����� ����� �������
{
	float totalExpenses = 0; 
	if (vectPtrsExpenses.size() == 0)
	{
		cout << "�������� ���\n";
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
