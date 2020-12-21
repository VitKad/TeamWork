#ifndef CLIENT_H   
#define CLIENT_H  
#include <string> 
using namespace std;

class Client
{
private:
	string name;   
	string clother;
	string service;
	string date;

public:
	Client(string n, string c, string s, string d);
	~Client();
	string getName(); 
	string getClother();
	string getService();
	string getDate();
};
#endif   
