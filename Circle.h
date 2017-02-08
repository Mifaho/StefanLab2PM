#ifndef CIRCLE_H
#define CIRCLE_H

#include "Shape.h"

class Circle : public Shape {
private:
public:
    double radius;
    Circle(double radius);
    double getArea() override;
    char* getColour() override;
   // ~Shape() override;
};

#endif /* CIRCLE_H */

