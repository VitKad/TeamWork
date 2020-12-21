#ifndef PROFITLIST_H   
#define PROFITLIST_H   
#include <list> 
#include "Profit.h"
 
class ProfitList
{
private:

	list <Profit*> setPtrsRR; 
	list <Profit*>::iterator iter;
public:
	~ProfitList();
	void insertProfit(Profit*);   
	void display();                    
	float getSumOfProfits();  
};

#endif  