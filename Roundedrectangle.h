

#ifndef ROUNDEDRECTANGLE_H
#define ROUNDEDRECTANGLE_H

#include "Rectangle.h"

class Roundedrectangle : Rectangle {
private:
public:
    double getArea() override;
    char* getColour() override;
    //~Shape() override;
};

#endif /* ROUNDEDRECTANGLE_H */

