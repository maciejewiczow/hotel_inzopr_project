#pragma once

#include "Model.h"
#include <string>

namespace hotel {
    class Damage: hotel::Model {

    private:
        int ID;
        std::string description;
        float price;
    public:
        Damage();
        Damage(int, std::string, float);
    };
}

