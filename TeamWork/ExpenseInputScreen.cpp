#include "stdafx.h" 
#include "ExpenseInputScreen.h" 
 
ExpenseInputScreen::ExpenseInputScreen(ExpenseList* per) : ptrExpenseList(per)
{
}

void ExpenseInputScreen::setExpense()  //экран ввода расходов
{

	string category, payee, date;
	float amount;
	cout << "Введите категорию расходов (Водитель, Материалы): ";
	getaLine(category);
	cout << "Введите организацию (ИП Иванов, ОАО Грузоперевозки): ";
	getaLine(payee);
	cout << "Введите дату платежа (01.10.2020): ";
	getaLine(date);
	cout << "Введите сумму в рублях(500): ";
	cin >> amount;
	cin.ignore(80, '\n');  
	Expense* ptrExpense = new Expense(category, payee, date, amount);   
	ptrExpenseList->insertExp(ptrExpense);
}