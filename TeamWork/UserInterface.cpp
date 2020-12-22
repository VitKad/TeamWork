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



void UserInterface::interact()  //����������� �������� ����
{
	do
	{
		ptrUserInputScreen = new UserInputScreen(ptrUser);
		ptrUserInputScreen->setUser();     //��������� � ������ ����� ������ � ������
		system("cls");
		if (ptrUserInputScreen->getRules() == 3) cout << "������ ��� ����� ��������, ������� ��� ���\n"; //������������������ ������������
	} while (ptrUserInputScreen->getRules() == 3);

	while (true)
	{

		cout << "\n";
		cout << "|          ����            |\n";
		cout << "|--------------------------|\n";
		cout << "|  1  | ������ ������      |\n";
		if (ptrUserInputScreen->getRules() == 1) cout << "|  2  | ������� ������     |\n";  //���������� ��� ���� ������ ���� ��� ��������
		cout << "|  q  | �����              |\n";
		ch = getaChar();
		system("cls");
		if (ch == '1')       // ���� ����� ������
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
			default: cout << "������ �����\n";
				break;
			}                     
		}                      
		else if (ch == '2')       //���� ������ ������
		{
			if (ptrUserInputScreen->getRules() == 1)  // �������� ���� ��������
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
				default: cout << "������ �����\n";
					break;
				}

			}
		}
  
		else if (ch == 'q')  //����� �� ���������
			return;           
		else     cout << "������ �����\n";
	}                       
	delete ptrClientInputScreen;
}
