#ifndef PARALLELPIPED_H
#define PARALLELPIPED_H

#include "Rectangle.h"

class Parallelpiped : Rectangle {
private:
    double depth;
public:
    double getArea() override;
    char* getColour() override;
    //~Shape() override;
};

#endif /* PARALLELPIPED_H */

