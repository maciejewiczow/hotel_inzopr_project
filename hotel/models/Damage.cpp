#include "pch.h"
#include "Damage.h"

hotel::Damage::Damage():ID(0),description(),price(0){}

hotel::Damage::Damage(int i, std::string dscr, float prc)
{
	ID = i;
	description = dscr;
	price = prc;
}