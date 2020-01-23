#pragma once

#include "View.h"
#include <functional>
#include "../models/Guest.h"

namespace hotel {
    class GuestView: hotel::View {


    public:
        void createGuestForm(std::function<void(hotel::Guest)> onSubmit);
    };
}
