#include "Circle.h"

Circle::Circle(double radius):radius(radius) {
    
}

double Circle::getArea() {
    return pow(radius, 2) * 3.1415;
}

char* Circle::getColour() {
    return Shape::colour;
}
/*
Circle::~Shape() {
    delete colour;
}*/
