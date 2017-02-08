#include "Roundedrectangle.h"

Roundedrectangle::Roundedrectangle(double height, double width, double radius):Rectangle(height, width), radius(radius){
    
}

double Roundedrectangle::getArea(){
    return height * width + 2 * (height + width) + 3.1415 * pow(radius, 2);
}

char* Roundedrectangle::getColour(){
    return Rectangle::getColour();
}