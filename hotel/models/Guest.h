#ifndef GUEST_H
#define GUEST_H
#include "Model.h"
namespace hotel {
	class Guest : hotel::Model {

	private:
		std::string Adres;
		int ID;
		std::string imie;
		std::string nazwisko;
		std::string NIP;
		std::string PESEL;
	};
}

#endif
