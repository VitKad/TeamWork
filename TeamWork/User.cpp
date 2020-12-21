#include "stdafx.h" 
#include "User.h" 

User::User(string l, string p) : login(l), password(p)
{
}

User::~User()
{
}

int User::access(string l, string p)
{
	if ("admin" == l && "1234" == p) return 1;
	else if ("user" == l && "4321" == p)  return 2;
	else return 3;
}