#include "rectangle.hpp"

Rectangle::Rectangle()
{
    length = 0;
    width = 0;
}

Rectangle::Rectangle(int length, int width)
{
    this->length = length;
    this->width = width;
}

int Rectangle::getArea()
{
    return length * width;
}
int Rectangle::getLength()
{
    return length;
}
int Rectangle::getWidth()
{
    return width;
}