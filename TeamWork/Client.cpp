#include "stdafx.h" 
#include "Client.h" 

Client::Client(string n, string c, string s, string d) : name(n), clother(c), service(s), date(d)
{
}

Client::~Client() 

{
}

string Client::getName()  //получение имени
{
	return name;
}

string Client::getClother() //получение вида одежды
{
	return clother;
}

string Client::getService() //получение услуги
{
	return service;
}

string Client::getDate()  //получение даты
{
	return date;
}
