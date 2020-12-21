#include "stdafx.h" 
#include "ProfitInputScreen.h" 
//Ввод дохода в таблицу
void ProfitInputScreen::setProfit()
{
	cout << "Введите имя Клиента (Иванов И.И.): " << endl;
	getaLine(addName);
	cout << "Введите стоимость стирки (1000): " << endl;
	cin >> addPriceCloth; cin.ignore(80, '\n');
	cout << "Введите стоимость услуги (0): " << endl;
	cin >> addPriceService; cin.ignore(80, '\n');
	cout << "Введите дату оплаты (03.10.2020): " << endl;
	getaLine(addDatePrice);
	Profit* ptrProfit = new Profit(addName, addPriceCloth, addPriceService, addDatePrice);
	ptrProfitList->insertProfit(ptrProfit);             
}


