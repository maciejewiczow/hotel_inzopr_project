#include "pch.h"
#include "Database.h"

hotel::Database::~Database()
{}
void hotel::Database::set_database_filename(const char * name)
{
	db_filename = name;
}
hotel::Database::Database():
	db(db_filename, SQLite::OPEN_CREATE | SQLite::OPEN_READWRITE)
{}

