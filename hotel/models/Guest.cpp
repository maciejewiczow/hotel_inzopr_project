#include "pch.h"
#include "Guest.h"

hotel::Guest::Guest(int i,std::string add,std::string nm,std::string srnm,std::string nip,std::string psl) {
	ID = i;
	address = add;
	name = nm;
	surname = srnm;
	NIP = nip;
	PESEL = psl;
}
hotel::Guest::Guest() {

}