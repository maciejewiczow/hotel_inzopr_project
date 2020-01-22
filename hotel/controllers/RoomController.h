#ifndef ROOMCONTROLLER_H
#define ROOMCONTROLLER_H
#include "Controller.h"
#include <chrono>
namespace hotel {
	typedef std::chrono::time_point<std::chrono::system_clock> timeStamp;
	class RoomController : hotel::Controller {

	public:
		void getFreeRooms(hotel::timeStamp start, hotel::timeStamp end);
	};
}

#endif
