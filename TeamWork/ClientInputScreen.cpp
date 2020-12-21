#include "stdafx.h" 
#include "ClientInputScreen.h" 

void ClientInputScreen::setClient()  //ввод клиентов
{
	cout << "Введите имя Клиента (Иванов И.И): " << endl;
	getaLine(addName);
	cout << "Введите вид одежды (Футболка, Куртка): " << endl;
	getaLine(addClother);
	cout << "Введите вид услуги (в случае отсутствия, оставить поле пустым): " << endl;
	getline(cin, addService);
	cout << "Введите дату обращения (01.10.2020): " << endl;
	getaLine(addDate);
	Client* ptrClient = new Client(addName, addClother, addService, addDate); 
	ptrClientList->insertClient(ptrClient);    //добавить клиента в таблицу       

}