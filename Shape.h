#ifndef SHAPE_H
#define SHAPE_H


#include <cmath>

class Shape{
public:
    char* colour;
    virtual double getArea() = 0;
    virtual char* getColour() = 0;
    ~Shape();
};

#endif /* SHAPE_H */

