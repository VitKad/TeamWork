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

