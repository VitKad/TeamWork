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
		cout << "|          ����            |\n";
		cout << "|--------------------------|\n";
		cout << "|  1  | ������ ������      |\n";
		cout << "|  2  | ������� ������     |\n";
		cout << "|  q  | �����              |\n";
		ch = getaChar();
		system("cls");
		if (ch == '1')       
		{
			cout << "\n";
			cout << "|      ������ ������       |\n";
			cout << "|--------------------------|\n";
			cout << "|  1  |    ����� ������    |\n";
			cout << "|  2  |   ������ �������   |\n";
			cout << "|  3  |      �������       |\n";
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
			default: cout << "������ �����\n";
				break;
			}                     
		}                      
		else if (ch == '2')       
		{
			
				cout << "\n";
				cout << "|     ������� �� �����     |\n";
				cout << "|--------------------------|\n";
				cout << "|  1  |  ������� ��������  |\n";
				cout << "|  2  |  ������� �������   |\n";
				cout << "|  3  |  ������� ��������  |\n";
				cout << "|  4  |   ������� �����    |\n";

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
				default: cout << "������ �����\n";
					break;
				}
				
			
		}
  
		else if (ch == 'q')
			return;           
		else     cout << "������ �����\n";
	}                       
	
}
