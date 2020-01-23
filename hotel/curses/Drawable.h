#pragma once

class drawable {
    int x, y;

public:
    int get_x();
    int get_y();

    virtual void draw() const = 0;

    drawable();
    drawable(int, int);
    virtual ~drawable();
};

