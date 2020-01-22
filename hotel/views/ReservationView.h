#ifndef RESERVATIONVIEW_H
#define RESERVATIONVIEW_H

namespace hotel {
	class ReservationView : hotel::View {


	public:
		void display(hotel::Room rooms);

		void display(hotel::Reservation reservation);

		void createReservationForm(hotel::Function<hotel::Reservation, void> onSubmit);
	};
}

#endif
