
#ifndef CYLINDER_H
#define CYLINDER_H

#include "Circle.h"

class Cylinder : public Circle {
private:
    double height;
public:
    Cylinder(char* newcolour, double radius, double height);
    double getArea() override;
    char* getColour() override;
    //~Shape() override;
};
#endif /* CYLINDER_H */

