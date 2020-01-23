#pragma once

#include <SQLiteCpp/SQLiteCpp.h>
#include "Repository.h"
#include "Damage.h"
#include "Room.h"
#include "Reservation.h"
#include "Guest.h"

namespace hotel {
	class Database {
		SQLite::Database db;
		static const char* db_filename;

		/*Repository<Guest> guests;
		Repository<Room> rooms;
		Repository<Reservation> reservations;
		Repository<Damage> damages;*/

	public:
		
		Database();
		~Database();

		static void set_filename(const char* name);
	};
}
