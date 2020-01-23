#ifndef MODEL_H
#define MODEL_H
#include <functional>
#include "Database.h"

namespace hotel {
	class Model;
	using predicate = std::function<bool(Model&)>;

	class Model {

	protected:
		Database context;

		Model() {};

	public:
		hotel::Model* getAll();

		hotel::Model getOne(predicate p);

		void save();

		hotel::Model sort(std::function<bool(const Model&, const Model&)> c);

		hotel::Model* getAll(std::function<bool(const hotel::Model&)> p);
	};
}

#endif
