#ifndef ROOMCONTROLLER_H
#define ROOMCONTROLLER_H

namespace hotel {
	class RoomController : hotel::Controller {


	public:
		void getFreeRooms(hotel::Date start, hotel::Date end);
	};
}

#endif
