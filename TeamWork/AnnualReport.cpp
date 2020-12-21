#include "stdafx.h" 
#include "AnnualReport.h" 

AnnualReport::AnnualReport(ProfitList* pRR, ExpenseList* pER) : ptrPL(pRR), ptrER(pER)
{
}

void AnnualReport::display()
{
	cout << "            ������� �����" << endl;
	cout << "--------------------------------------\n";
	cout << "--------------------------------------\n";
	cout << "                ������" << endl;
	cout << "--------------------------------------\n";
	cout << "�������:";
	prof = ptrPL->getSumOfProfits();
	cout << prof << endl;
	cout << "--------------------------------------\n";
	cout << "                �������" << endl;
	cout << "--------------------------------------\n";
	cout << "  ���������        |   ���������\n";
	cout << "-------------------|------------------\n";
	expenses = ptrER->getSumOfExpenses();
	cout << "--------------------------------------\n";
	cout << "����� �������:";
	cout << expenses << endl;  
	cout << "--------------------------------------\n";
	cout << "--------------------------------------\n";
	cout << "�������:  " << (prof - expenses) << endl;
	cout << "--------------------------------------\n";
}



