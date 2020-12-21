#include "stdafx.h" 
#include "Profit.h" 

Profit::Profit(string n, float pC, float pS, string dP) : name(n), priceCloth(pC), priceService(pS), datePrice(dP)
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

float Profit::getPriceCloth()  
{
	return priceCloth;
}

float Profit::getPriceService()        
{
	return priceService;
}