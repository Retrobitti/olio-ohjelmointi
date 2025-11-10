
#include "rectangle.h"

Rectangle::Rectangle()
{
    setWidth(0);
    setHeight(0);
}

void Rectangle::setHeight(double h) {
    height = h;
}

void Rectangle::setWidth(double w) {
    width = w;
}

double Rectangle::getArea() const {
    return width * height;
}

double Rectangle::getCircum() const {
    return 2 * (width + height);
}

