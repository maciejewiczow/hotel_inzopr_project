#pragma once

#include "Database.h"

namespace hotel {
	class Database;

	template<typename model_t>
	class Repository
	{
		Database& db;

	public:
		Repository(Database& db) : db(db) {};
		~Repository() {};

	};
}
