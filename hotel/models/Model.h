#ifndef MODEL_H
#define MODEL_H
#include <functional>
#include "Databse.h"
namespace hotel {
	using predicate = std::function<Model>;
	class Model {

	private:
		Databse context;

	public:
		hotel::Model* getAll();

		hotel::Model getOne(predicate p);

		void save();

		hotel::Model sort(std::function<bool(Model, Model)> c);

		hotel::Model* getAll(std::function<bool(hotel::Model)> p);
	};
}

#endif
