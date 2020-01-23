#ifndef RESERVATIONCONTROLLER_H
#define RESERVATIONCONTROLLER_H
#include "Controller.h"
namespace hotel {
	class ReservationController : hotel::Controller {


	public:
		void addReservation();

		void modifyReservation();

		void removeReservation();
	};
}

#endif
