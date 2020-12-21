#ifndef EXPENSE_H  
#define EXPENSE_H   
#include <string> 
using namespace std;

class Expense
{
public:
	string category;     
	string payee;            
	string datePay;
	float amount;   
	Expense(){}
	Expense(string c, string p, string d, float a) : category(c), payee(p), datePay(d), amount(a)
	{
	}
};
#endif 
