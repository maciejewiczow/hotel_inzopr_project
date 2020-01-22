#ifndef GUESTCONTROLLER_H
#define GUESTCONTROLLER_H

namespace hotel {
	class GuestController : hotel::Controller {


	public:
		void checkIn(hotel::Guest guest);

		void checkOut(hotel::Guest guest);
	};
}

#endif
