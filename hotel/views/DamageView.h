#pragma once

#include "View.h"
#include "../models/Damage.h"
#include <functional>
namespace hotel {
    class DamageView: hotel::View {


    public:
        void createDamageForm(std::function<void(hotel::Damage)> onSubmit);
    };
}

