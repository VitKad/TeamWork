#ifndef EXPENSELIST_H    
#define EXPENSELIST_H   
#include <vector> 
#include "Expense.h"

class ExpenseList  //класс таблицы расходов
{
private:
	vector<Expense*> vectPtrsExpenses;  //указатель контейнер вектор на расходы
	vector<Expense*>::iterator iter; //итератор расходов
public:
	~ExpenseList();
	void insertExp(Expense*); //добавление в таблицу расходов
	void display(); //отображение на экране
	float getSumOfExpenses(); //расчитать сумму всех расходов
};

#endif 