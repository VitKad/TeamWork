#include "stdafx.h" 
#include "Client.h" 

Client::Client(string n, string c, string s, string d) : name(n), clother(c), service(s), date(d)
{
}

Client::~Client() 

{
}

string Client::getName() 
{
	return name;
}

string Client::getClother() 
{
	return clother;
}

string Client::getService() 
{
	return service;
}

string Client::getDate()  
{
	return date;
}
