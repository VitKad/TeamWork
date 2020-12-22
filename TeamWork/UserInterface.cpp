#include "stdafx.h" 
#include "UserInterface.h" 

UserInterface::UserInterface()
{
	ptrClientList = new ClientList;
	ptrProfitList = new ProfitList;
	ptrExpenseList = new ExpenseList;
}


UserInterface::~UserInterface()
{
	delete ptrClientList;
	delete ptrProfitList;
	delete ptrExpenseList;
}



void UserInterface::interact()  //отображение главного меню
{
	do
	{
		ptrUserInputScreen = new UserInputScreen(ptrUser);
		ptrUserInputScreen->setUser();     //обращение к методу ввода логина и пароля
		system("cls");
		if (ptrUserInputScreen->getRules() == 3) cout << "Пароль или логин неверный, введите еще раз\n"; //неавторизированный пользователь
	} while (ptrUserInputScreen->getRules() == 3);

	while (true)
	{

		cout << "\n";
		cout << "|          Меню            |\n";
		cout << "|--------------------------|\n";
		cout << "|  1  | Ввести данные      |\n";
		if (ptrUserInputScreen->getRules() == 1) cout << "|  2  | Вывести данные     |\n";  //отображать это меню только если это директор
		cout << "|  q  | Выход              |\n";
		ch = getaChar();
		system("cls");
		if (ch == '1')       // меню ввода данных
		{
			cout << "\n";
			cout << "|      Ввести данные       |\n";
			cout << "|--------------------------|\n";
			cout << "|  1  |    Новый клиент    |\n";
			cout << "|  2  |   Оплата клиента   |\n";
			cout << "|  3  |      Расходы       |\n";
			ch = getaChar();
			system("cls");
			switch (ch)
			{
			    
			case '1': ptrClientInputScreen = new ClientInputScreen(ptrClientList);
				ptrClientInputScreen->setClient();
				delete ptrClientInputScreen;
				break;
				break;
			case '2': ptrProfitInputScreen = new ProfitInputScreen(ptrProfitList);
				ptrProfitInputScreen->setProfit();
				delete ptrProfitInputScreen;
				break;
			case '3': ptrExpenseInputScreen = new ExpenseInputScreen(ptrExpenseList);
				ptrExpenseInputScreen->setExpense();
				delete ptrExpenseInputScreen;
				break; 
			default: cout << "Ошибка ввода\n";
				break;
			}                     
		}                      
		else if (ch == '2')       //меню вывода данных
		{
			if (ptrUserInputScreen->getRules() == 1)  // выводить если директор
			{
				cout << "\n";
				cout << "|     Вывести на экран     |\n";
				cout << "|--------------------------|\n";
				cout << "|  1  |  Таблица клиентов  |\n";
				cout << "|  2  |  Таблица доходов   |\n";
				cout << "|  3  |  Таблица расходов  |\n";
				cout << "|  4  |   Годовой отчет    |\n";

				ch = getaChar();
				system("cls");
				switch (ch)
				{
				case '1': ptrClientList->display();
					break;
				case '2':ptrProfitList->display();
					break;
				case '3': ptrExpenseList->display();
					break;
				case '4':ptrAnnualReport = new AnnualReport(ptrProfitList, ptrExpenseList);
					ptrAnnualReport->display();
					delete ptrAnnualReport;
					break;
				default: cout << "Ошибка ввода\n";
					break;
				}

			}
		}
  
		else if (ch == 'q')  //выход из программы
			return;           
		else     cout << "Ошибка ввода\n";
	}                       
	delete ptrClientInputScreen;
}
