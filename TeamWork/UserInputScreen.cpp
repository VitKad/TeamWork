#include "stdafx.h" 
#include "UserInputScreen.h" 

void UserInputScreen::setUser()   //������ ����� � ������
{
	cout << "������� �����: " << endl;
	getaLine(addLogin);
	cout << "������� ������: " << endl;
	getaLine(addPassword);
	rules = ptrUser->access(addLogin, addPassword);
}

int UserInputScreen::getRules()
{
	return rules;
}
