#include "Cylinder.h"

Cylinder::Cylinder(char* newcolour,double radius, double height):Circle(newcolour, radius), height(height){
    
}

double Cylinder::getArea(){
    //return Circle::getArea() * height;
    return (2 * pow(radius, 2) * 3.1415) + (height * (2 * 3.1415 * radius)); 
}

char* Cylinder::getColour(){
    return colour;
}
/*
Cylinder::~Shape() {
    delete colour;
}*/