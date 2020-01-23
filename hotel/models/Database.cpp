#include "pch.h"
#include "Database.h"

hotel::Database::~Database() {}

const char* hotel::Database::db_filename = "";

void hotel::Database::set_filename(const char * name)
{
    db_filename = name;
}

hotel::Database::Database():
    db(db_filename, SQLite::OPEN_READWRITE),
    guests(*this),
    rooms(*this),
    damages(*this),
    reservations(*this)
{}

