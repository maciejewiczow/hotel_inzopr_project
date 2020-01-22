#include "Model.h"
#include <string>

#ifndef DAMAGE_H
#define DAMAGE_H

namespace hotel {
    class Damage: hotel::Model {

    private:
        int ID;
        std::string description;
        float price;
	public:
		Damage();
    };
}

#endif
