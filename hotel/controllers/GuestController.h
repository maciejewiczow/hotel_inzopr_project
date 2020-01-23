#ifndef GUESTCONTROLLER_H
#define GUESTCONTROLLER_H
#include "Controller.h"
#include "../models/Guest.h"
namespace hotel {
	class GuestController : hotel::Controller {


	public:
		void checkIn(hotel::Guest guest);

		void checkOut(hotel::Guest guest);
	};
}

#endif
