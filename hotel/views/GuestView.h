#ifndef GUESTVIEW_H
#define GUESTVIEW_H

namespace hotel {
	class GuestView : hotel::View {


	public:
		void createGuestForm(hotel::Function<hotel::Guest, void> onSubmit);
	};
}

#endif
