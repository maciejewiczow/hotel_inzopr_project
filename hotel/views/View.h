#ifndef VIEW_H
#define VIEW_H

#include "curses/Window.h"

namespace hotel {
    class View {
        curses::window win;

    public:
        virtual void display() = 0;

    };
}

#endif
