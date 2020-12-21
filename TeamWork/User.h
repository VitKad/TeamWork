
#ifndef USER_H   
#define USER_H   

#include <string> 
using namespace std;
class User
{
private:
	string login;
	string password;
public:
	User(string l, string p);
	~User();
	int access(string l, string p);

};

#endif