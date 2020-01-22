#ifndef MODEL_H
#define MODEL_H

namespace hotel {
	class Model {

	private:
		Database context;

	public:
		hotel::Model* getAll();

		hotel::Model getOne(Predicate p);

		void save();

		hotel::Model sort(hotel::Function<(Model, Model), bool> c);

		hotel::Model* getAll(hotel::Function<hotel::Model, bool> p);
	};
}

#endif
