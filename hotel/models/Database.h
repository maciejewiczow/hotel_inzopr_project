#pragma once

#include <SQLiteCpp/SQLiteCpp.h>
#include "Repository.h"

namespace hotel {
    class Room;
    class Guest;
    class Reservation;
    class Damage;

    class Database {
        SQLite::Database db;
        static const char* db_filename;


    public:
        Repository<Guest> guests;
        Repository<Room> rooms;
        Repository<Reservation> reservations;
        Repository<Damage> damages;

        Database();
        ~Database();

        static void set_filename(const char* name);
    };
}
