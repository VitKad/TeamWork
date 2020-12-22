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



void ProfitList::display()       //отоброжение на экране доходов                  
{

	cout << "\nФИО Клиента        |Стоимость стирки        |Стоимость услуги        |Общая стоимость         |Дата оплаты\n";
	cout << "----------------------------------------------------------------------------------------------------------------------\n";
	if (setPtrsRR.empty())
		cout << "---Нет доходов---\n" << endl;
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

float ProfitList::getSumOfProfits()  //общая сумма доходов
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


