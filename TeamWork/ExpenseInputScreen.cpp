#include "stdafx.h" 
#include "ExpenseInputScreen.h" 
 
ExpenseInputScreen::ExpenseInputScreen(ExpenseList* per) : ptrExpenseList(per)
{
}

void ExpenseInputScreen::setExpense()
{

	string category, payee, date;
	float amount;
	cout << "������� ��������� �������� (��������, ���������): ";
	getaLine(category);
	cout << "������� ����������� (�� ������, ��� ��������������): ";
	getaLine(payee);
	cout << "������� ���� ������� (01.10.2020): ";
	getaLine(date);
	cout << "������� ����� � ������(500): ";
	cin >> amount;
	cin.ignore(80, '\n');  
	Expense* ptrExpense = new Expense(category, payee, date, amount);   
	ptrExpenseList->insertExp(ptrExpense);
}