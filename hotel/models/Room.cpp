#include "pch.h"
#include "Room.h"

hotel::Room::Room() :ID(0), number(), capacity(0){}

hotel::Room::Room(int i, std::string nr, unsigned int cpcty)
{
	ID = i;
	number = nr;
	capacity = cpcty;
}

void hotel::Room::getFreeRooms(timeStamp Start, timeStamp End)
{
}
