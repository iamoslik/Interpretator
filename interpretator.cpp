#include "interpretator.h"
Interpretator::Interpretator (const char * program):pars(program)
{
	//throw "I am here";
};

void Interpretator::interpretation()
{
	pars.analyze();
	//E.execute(pars.prog);
}