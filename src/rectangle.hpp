#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP

class Rectangle{

    int length;
    int width;

public:
    Rectangle();
    Rectangle(int length, int width);
    int getArea();
    int getLength();
    int getWidth();
};

#endif