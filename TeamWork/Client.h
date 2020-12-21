#ifndef CLIENT_H   
#define CLIENT_H  
#include <string> 
using namespace std;

class Client // класс клиента
{
private:
	string name;   //фамилия и.о
	string clother; //вид одежды
	string service; //услуга
	string date;  //дата обращения

public:
	Client(string n, string c, string s, string d);
	~Client();
	string getName(); 
	string getClother();
	string getService();
	string getDate();
};
#endif   
