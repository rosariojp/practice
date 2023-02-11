#include <iostream>
#include "polygon.hpp"
#include "rectangle.hpp"

int main() 
{
    int height = 2;
    int width = 4;
    int length = 6;
    Polygon polygon(height, width);
    Rectangle rectangle(length, width);

    std::cout << "Height: " << polygon.getHeight() << std::endl;
    std::cout << "Width: " << polygon.getWidth() << std::endl;
    std::cout << "Area of rectangle is: " << polygon.getArea() << std::endl;

    std::cout << "Rectangle Length: " << rectangle.getLength() << std::endl;
    std::cout << "Rectangle Width: " << rectangle.getWidth() << std::endl;
    std::cout << "Area of rectangle is: " << rectangle.getArea() << std::endl;


    return 0;
}