#ifndef USERINPUTSCREEN_H   
#define USERINPUTSCREEN_H 
#include "User.h"

class UserInputScreen
{
private:
	User* ptrUser;
	string addLogin;      
	string addPassword;
	int rules;
public:
	UserInputScreen(User* ptrUL) : ptrUser(ptrUL)
	{
	}
	int getRules();
	void setUser(); 
};

#endif USERINPUTSCREEN_H   
