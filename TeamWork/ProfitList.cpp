#include "stdafx.h" 
#include "ProfitList.h" 
using namespace std;

ProfitList::~ProfitList()       
{
	while (!setPtrsRR.empty())
	{
		iter = setPtrsRR.begin();
		delete *iter;
		setPtrsRR.erase(iter);
	}
}


void ProfitList::insertProfit(Profit* ptrRow) {
	setPtrsRR.push_back(ptrRow);  
}



void ProfitList::display()       //����������� �� ������ �������                  
{

	cout << "\n��� �������        |��������� ������        |��������� ������        |����� ���������         |���� ������\n";
	cout << "----------------------------------------------------------------------------------------------------------------------\n";
	if (setPtrsRR.empty())
		cout << "---��� �������---\n" << endl;
	else
	{
		iter = setPtrsRR.begin();
		while (iter != setPtrsRR.end()) 
		{

			cout << std::setw(15) << (*iter)->getName() << "    |     " << std::setw(15) << (*iter)->getPriceCloth() << "    |     " << std::setw(15) << (*iter)->getPriceService() << "    |     " << std::setw(15) << (*iter)->getPriceCloth() + (*iter)->getPriceService() << "    |     " << std::setw(15) << (*iter)->getDate() << endl;
			*iter++;
		}
	}
}

float ProfitList::getSumOfProfits()  //����� ����� �������
{
	float sumProfits = 0.0;
	iter = setPtrsRR.begin();
	while (iter != setPtrsRR.end())
	{
		sumProfits += (*iter)->getPriceCloth() + (*iter)->getPriceService();
		iter++;
	}
	return sumProfits;
}


