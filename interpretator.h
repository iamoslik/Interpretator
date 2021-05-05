#pragma once
#include "parser.h"
//extern table_ident TID;
class Interpretator 
{
	Parser pars;
	//Executer E;
public:
	Interpretator (const char * program);
	void interpretation();
}; 
