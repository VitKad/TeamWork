
#ifndef USER_H   
#define USER_H   
#include <string> 
using namespace std;

class User // класс пользователя
{
private:
	string login; //логин
	string password; //пароль
public:
	User(string l, string p);
	~User();
	int access(string l, string p);  //доступ

};

#endif