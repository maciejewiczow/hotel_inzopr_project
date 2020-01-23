#include "pch.h"
#include "drawable.h"


int drawable::get_x() {
    return x;
}

int drawable::get_y() {
    return y;
}

drawable::drawable()
{
}

drawable::drawable(int x, int y): x(x), y(y)
{}


drawable::~drawable() {}
