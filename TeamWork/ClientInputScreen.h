#ifndef CLIENTINPUTSCREEN_H   
#define CLIENTINPUTSCREEN_H  
#include <string> 
#include "ClientList.h"
using namespace std;

class ClientInputScreen
{
private:
	ClientList* ptrClientList;
	string addName;     
	string addClother;
	string addService;
	string addDate;
public:
	ClientInputScreen(ClientList* ptrCL) : ptrClientList(ptrCL)
	{
	}
	void setClient();
};
#endif 
