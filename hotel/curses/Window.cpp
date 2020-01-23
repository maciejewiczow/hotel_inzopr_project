#include "pch.h"
#include "Window.h"


curses::window::window() {

}


void curses::window::draw() {
    for(auto element : content) {
        wmove(winptr, element->get_x(), element->get_y());
        element->draw();
    }
}

curses::window::~window() {
}

void curses::window::apply_border(const border & b)
{
    wborder(winptr, b.left, b.right, b.top, b.bottom, b.top_left, b.top_right, b.bottom_left, b.bottom_right);
}


