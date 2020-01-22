#ifndef GUEST_H
#define GUEST_H
#include "Model.h"

 namespace hotel {
	class Guest : hotel::Model {
		static const char* table;

		int ID;
		std::string address;
		std::string name;
		std::string surname;
		std::string NIP;
		std::string PESEL;
	public:
		Guest();
		Guest(int i,std::string add,std::string nm,std::string srnm,std::string nip,std::string);
	};
}

#endif
