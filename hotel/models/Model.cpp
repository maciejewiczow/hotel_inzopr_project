#include "pch.h"
#include "Model.h"

hotel::Model* hotel::Model::getAll() {
    return nullptr;
}

hotel::Model hotel::Model::getOne(hotel::Predicate p) {
    return Model();
}

void hotel::Model::save() {

}

hotel::Model hotel::Model::sort(std::function<bool(const Model&, const Model&)> c)
{
    return hotel::Model();
}

hotel::Model * hotel::Model::getAll(hotel::Predicate p)
{
    return nullptr;
}
