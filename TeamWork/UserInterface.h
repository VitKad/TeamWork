#ifndef USERINTERFACE_H   
#define USERINTERFACE_H  
#include "UserInputScreen.h"
#include "AnnualReport.h"
#include "ExpenseInputScreen.h"
#include "ExpenseList.h"
#include "ProfitInputScreen.h"
#include "ProfitList.h"
#include "ClientInputScreen.h"
#include "ClientList.h"
#include "UserInputScreen.h"
#include "User.h"

class UserInterface
{
private:
	//указатели на таблицы и экраны ввода
	UserInputScreen* ptrUserInputScreen;
	User* ptrUser;
	ClientList* ptrClientList;
	ClientInputScreen* ptrClientInputScreen;
	ProfitList* ptrProfitList;
	ProfitInputScreen* ptrProfitInputScreen;
	ExpenseList* ptrExpenseList;
	ExpenseInputScreen* ptrExpenseInputScreen;
	AnnualReport* ptrAnnualReport;
	char ch;
public:
	UserInterface();
	~UserInterface();
	void interact(); //основной интерфейс программы
};

#endif

