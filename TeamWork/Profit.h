#ifndef PROFIT_H    
#define PROFIT_H   
#include <string> 


using namespace std;
class Profit //Класс доходов
{
private:
	string name; //имя клиента
	float priceCloth; //стоимость стирки
	float priceService; //стоимость услуги
	string datePrice;//дата оплаты
public:
	Profit(string, float, float, string);                 
	float getPriceCloth(); //получить стоимость стирки
	string getName();            //получить имя
	float getPriceService(); //получить стоимость услуги
	string getDate(); //получить дату оплаты
};
#endif
