#pragma once

#include <functional>
#include "models/Database.h"

namespace hotel {
    class Model;
    using Predicate = std::function<bool(Model&)>;

    class Model {

    protected:
        Model() {};

    public:
        hotel::Model* getAll();

        hotel::Model getOne(Predicate p);

        void save();

        hotel::Model sort(std::function<bool(const Model&, const Model&)> c);

        hotel::Model* getAll(Predicate p);
    };
}
