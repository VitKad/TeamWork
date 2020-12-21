#include "stdafx.h" 
#include "ClientList.h" 

ClientList::~ClientList()             //удаление всей памяти о клиенте
{
	while (!setPtrsClients.empty()) 
	{
		iter = setPtrsClients.begin();
		delete *iter;
		setPtrsClients.erase(iter);
	}
}


void ClientList::insertClient(Client* ptrT) {  //добавление клиента в список
	setPtrsClients.push_back(ptrT);      
}
  
void ClientList::display()     //отображение таблицы клиентов
{
	cout << "\nФИО Клиента        |Вид Одежды              |Вид Услуги              |    Дата обращения         \n";
	cout << "---------------------------------------------------------------------------------------------\n";
	if (setPtrsClients.empty())  //если список пустой
		cout << "---Нет клиентов---\n" << endl; 
	else
	{
		iter = setPtrsClients.begin();
		while (iter != setPtrsClients.end()) //вывести все строки таблицы
		{
			cout << std::setw(15) << (*iter)->getName() << "    |     " << std::setw(15) << (*iter)->getClother() << "    |     " << std::setw(15) << (*iter)->getService() << "    |     " << std::setw(15) << (*iter)->getDate() << endl;
			*iter++;
		}
	}
}
