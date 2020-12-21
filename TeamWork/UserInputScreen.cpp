#include "stdafx.h" 
#include "UserInputScreen.h" 

void UserInputScreen::setUser() 
{
	cout << "¬ведите логин: " << endl;
	getaLine(addLogin);
	cout << "¬ведите пароль: " << endl;
	getaLine(addPassword);
	rules = ptrUser->access(addLogin, addPassword);
}

int UserInputScreen::getRules()
{
	return rules;
}
