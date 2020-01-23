#include "pch.h"
#include "Reservation.h"

hotel::Reservation::Reservation():ID(0),Start(),End(){}

hotel::Reservation::Reservation(int i, timeStamp strt,timeStamp nd)
{
	ID = i;
	Start = strt;
	End = nd;
}
