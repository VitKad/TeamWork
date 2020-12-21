#include "stdafx.h" 
#include "Profit.h" 

Profit::Profit(string n, int pC, int pS, string dP) : name(n), priceCloth(pC), priceService(pS), datePrice(dP)
{
}
// ������ ��������� �����, ����, ��������� ������ � ������
string Profit::getName()                      
{
	return name;
}

string Profit::getDate() 
{
	return datePrice;
}

int Profit::getPriceCloth()  
{
	return priceCloth;
}

int Profit::getPriceService()        
{
	return priceService;
}