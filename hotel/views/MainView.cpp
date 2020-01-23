#include "pch.h"
#include "MainView.h"

#include <fstream>

hotel::MainView::MainView():
    View(),
    logo()
{
    std::ifstream logo{ "assets/logo.txt" };

    if(!logo) {
        throw std::exception{ "Could not open logo file" };
    }

    this->logo = std::string{ std::istreambuf_iterator<char>{logo}, std::istreambuf_iterator<char>{} };

    for(const auto& c : this->logo) {
        if(c == '\n') break;
        logo_width++;
    }
}

hotel::MainView::~MainView()
{
}

void hotel::MainView::display() {
    int width = getmaxx(stdscr);

    mvprintw((width - logo_width) / 2, 2, logo.c_str());
}
