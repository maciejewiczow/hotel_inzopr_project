#ifndef RESERVATIONVIEW_H
#define RESERVATIONVIEW_H
#include "View.h"
#include "../models/Room.h"
#include "../models/Reservation.h"
#include <functional>
namespace hotel {
	class ReservationView : hotel::View {


	public:
		void display(hotel::Room rooms);

		void display(hotel::Reservation reservation);

		void createReservationForm(std::function<void(hotel::Reservation)> onSubmit);
	};
}

#endif
