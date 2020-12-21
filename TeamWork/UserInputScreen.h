#ifndef USERINPUTSCREEN_H   
#define USERINPUTSCREEN_H 
#include "User.h"

class UserInputScreen //экран ввода пользователя
{
private:
	User* ptrUser; //указатель на пользователя
	string addLogin;      //логин
	string addPassword;   //пароль
	int rules;  //права доступа
public:
	UserInputScreen(User* ptrUL) : ptrUser(ptrUL)
	{
	}
	int getRules(); //получить номер права доступа
	void setUser(); //ввод пользователя
};

#endif USERINPUTSCREEN_H   
