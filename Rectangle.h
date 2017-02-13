#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Shape.h"

class Rectangle :public Shape {
public:
    double height;
    double width;
    Rectangle(char* colour, double height, double width);
    double getArea() override;
    char* getColour() override;
   //~Shape() override;
};

#endif /* RECTANGLE_H */

