

#ifndef ROUNDEDRECTANGLE_H
#define ROUNDEDRECTANGLE_H

#include "Rectangle.h"

class Roundedrectangle : public Rectangle {
private:
    double radius;
public:
    Roundedrectangle(double height, double width, double radius);
    double getArea() override;
    char* getColour() override;
    //~Shape() override;
};

#endif /* ROUNDEDRECTANGLE_H */

