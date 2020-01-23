#pragma once

#include <curses.h>
#include <list>

#include "drawable.h"

namespace curses {
    class window {
    public:
        window();

        window(const window&) = delete;
        window(window&&) = default;
        window& operator=(const window&) = delete;
        window& operator=(window&&) = default;

        void draw();

        ~window();

        struct border {
            chtype top,
                bottom,
                left,
                right,
                top_right,
                top_left,
                bottom_left,
                bottom_right;
        };

    private:
        WINDOW* winptr;
        int widht, height, x, y;
        border b;

        std::list<drawable*> content;

        void apply_border(const border& b);
    };
}
