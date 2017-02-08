#include "Cylinder.h"

Cylinder::Cylinder(double radius, double height):height(height){
    super(radius);
}

double Cylinder::getArea(){
    //return Circle::getArea() * height;
    return (2 * Circle::getArea()) + (height * (2 * 3.1415 * radius)); 
}

char* Cylinder::getColour(){
    return Circle::getColour();
}
/*
Cylinder::~Shape() {
    delete colour;
}*/