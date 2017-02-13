#include "Circle.h"

Circle::Circle(char* colour, double radius):Shape(colour), radius(radius) {
    
}

double Circle::getArea() {
    return pow(radius, 2) * 3.1415;
}

char* Circle::getColour() {
    return colour;
}
/*
Circle::~Shape() {
    delete colour;
}*/
