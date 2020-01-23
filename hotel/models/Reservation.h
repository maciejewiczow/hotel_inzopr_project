#pragma once
#include "Model.h"
#include <string>
#include <chrono>

namespace hotel {
	typedef std::chrono::time_point<std::chrono::system_clock> timeStamp;
	class Reservation : hotel::Model {

	private:
		int ID;
		timeStamp Start;
		timeStamp End;
	public:
		Reservation();
		Reservation(int,timeStamp,timeStamp);
	};
}