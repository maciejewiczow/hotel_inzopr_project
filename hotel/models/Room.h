#pragma once
#include "Model.h"
#include <string>
#include <chrono>

namespace hotel {
typedef std::chrono::time_point<std::chrono::system_clock> timeStamp;
	class Room : hotel::Model {

	private:
		int ID;
		std::string number;
		unsigned int capacity;

	public:
		Room();
		static void getFreeRooms(timeStamp Start,timeStamp End);
	};
}