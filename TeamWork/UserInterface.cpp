#include "stdafx.h" 
#include "UserInterface.h" 

UserInterface::UserInterface()
{
	
}


UserInterface::~UserInterface()
{

}



void UserInterface::interact()
{

	while (true)
	{

		cout << "\n";
		cout << "|          Меню            |\n";
		cout << "|--------------------------|\n";
		cout << "|  1  | Ввести данные      |\n";
		cout << "|  2  | Вывести данные     |\n";
		cout << "|  q  | Выход              |\n";
		ch = getaChar();
		system("cls");
		if (ch == '1')       
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
			    
			case '1': 
				break;
			case '2': 
				break;
			case '3': 
				break; 
			default: cout << "Ошибка ввода\n";
				break;
			}                     
		}                      
		else if (ch == '2')       
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
				case '1': 
					break;
				case '2': 
					break;
				case '3': 
					break;
				case '4':      
					break;
				default: cout << "Ошибка ввода\n";
					break;
				}
				
			
		}
  
		else if (ch == 'q')
			return;           
		else     cout << "Ошибка ввода\n";
	}                       
	
}
