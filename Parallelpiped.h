#ifndef PARALLELPIPED_H
#define PARALLELPIPED_H

#include "Rectangle.h"

class Parallelpiped : public Rectangle {
private:
    double depth;
public:
    Parallelpiped(double height, double width, double depth); 
    double getArea() override;
    char* getColour() override;
    //~Shape() override;
};

#endif /* PARALLELPIPED_H */

