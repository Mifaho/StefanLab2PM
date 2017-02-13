#include "Roundedrectangle.h"

Roundedrectangle::Roundedrectangle(char* colour, double height, double width, double radius):Rectangle(colour, height, width), radius(radius){
    
}

double Roundedrectangle::getArea(){
    return height * width - ((4 - 3.1415) * pow(radius, 2)); //pow(radius, 2);
}

char* Roundedrectangle::getColour(){
    return colour;
}