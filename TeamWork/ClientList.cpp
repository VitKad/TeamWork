#include "stdafx.h" 
#include "ClientList.h" 

ClientList::~ClientList()                  
{
	while (!setPtrsClients.empty()) 
	{
		iter = setPtrsClients.begin();
		delete *iter;
		setPtrsClients.erase(iter);
	}
}


void ClientList::insertClient(Client* ptrT) {
	setPtrsClients.push_back(ptrT);      
}
  
void ClientList::display()     
{
	cout << "\nФИО Клиента        |Вид Одежды              |Вид Услуги              |    Дата обращения         \n";
	cout << "---------------------------------------------------------------------------------------------\n";
	if (setPtrsClients.empty())
		cout << "***Нет клиентов***\n" << endl; 
	else
	{
		iter = setPtrsClients.begin();
		while (iter != setPtrsClients.end()) 
		{
			cout << std::setw(15) << (*iter)->getName() << "    |     " << std::setw(15) << (*iter)->getClother() << "    |     " << std::setw(15) << (*iter)->getService() << "    |     " << std::setw(15) << (*iter)->getDate() << endl;
			*iter++;
		}
	}
}
