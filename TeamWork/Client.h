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
	string getName(); //получить имя
	string getClother();//получить вид одежды
	string getService();//получить услугу
	string getDate();//получить дату обащения
};
#endif   
