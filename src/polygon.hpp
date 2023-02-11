#ifndef POLYGON_HPP
#define POLYGON_HPP

class Polygon 
{
    int height;
    int width;
 
 public:
    Polygon();
    Polygon(int height, int width);
    int getArea();
    int getHeight();
    int getWidth();
};

#endif