#ifndef DATABASE_H
#define DATABASE_H
#include <SQLiteCpp/SQLiteCpp.h>
namespace hotel {
	class Database {
		SQLite::Database db;
		static const char* db_filename;

	public:
		
		Database();

		static void set_database_filename(const char* name);
	};
}

#endif
