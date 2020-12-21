#ifndef PROFIT_H    
#define PROFIT_H   
#include <string> 


using namespace std;
class Profit
{
private:
	string name; 
	float priceCloth;
	float priceService;
	string datePrice;
public:
	Profit(string, float, float, string);                 
	float getPriceCloth();
	string getName();            
	float getPriceService(); 
	string getDate();
};
#endif
