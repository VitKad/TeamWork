#ifndef EXPENSE_H  
#define EXPENSE_H   
#include <string> 
using namespace std;

class Expense //класс расходов
{
public:
	string category;   //категория услуги  
	string payee;    //название организации        
	string datePay;  //дата оплаты
	float amount;   //сумма оплаты
	Expense(){}
	Expense(string c, string p, string d, float a) : category(c), payee(p), datePay(d), amount(a)
	{
	}
};
#endif 
