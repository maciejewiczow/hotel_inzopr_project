#pragma once

#include "curses/Window.h"

namespace hotel {
    class View {
        curses::window win;

    public:
        virtual void display() = 0;

    };
}
