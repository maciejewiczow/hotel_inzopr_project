#ifndef GUEST_H
#define GUEST_H

namespace hotel {
	class Guest : hotel::Model {

	private:
		string Adres;
		int ID;
		string imie;
		string nazwisko;
		string NIP;
		string PESEL;
	};
}

#endif
