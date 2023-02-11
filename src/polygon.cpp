#include "polygon.hpp"

Polygon::Polygon()
{
    // Empty Constructor
}

Polygon::Polygon(int height, int width)
{
    this->height = height;
    this->width = width;
}

int Polygon::getArea()
{
    return height * width;
}

int Polygon::getHeight() 
{
    return height;
}

int Polygon::getWidth()
{
    return width;
}