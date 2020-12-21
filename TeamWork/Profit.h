#ifndef PROFIT_H    
#define PROFIT_H   
#include <string> 


using namespace std;
class Profit
{
private:
	string name; 
	int priceCloth;
	int priceService;
	string datePrice;
public:
	Profit(string, int, int, string);                 
	int getPriceCloth();
	string getName();            
	int getPriceService(); 
	string getDate();
};
#endif
