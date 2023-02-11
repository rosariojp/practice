#include <iostream>
#include "polygon.hpp"

int main() 
{
    int height = 2;
    int width = 4;
    Polygon rectangle(height, width);

    std::cout << "Height: " << rectangle.getHeight() << std::endl;
    std::cout << "Width: " << rectangle.getWidth() << std::endl;
    std::cout << "Area of rectangle is: " << rectangle.getArea();
    return 0;
}