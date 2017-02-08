#include "Parallelpiped.h"

Parallelpiped::Parallelpiped(double height, double width, double depth):Rectangle(height, width), depth(depth){
    
}

double Parallelpiped::getArea() {
    //return Rectangle::getArea() * depth;
    return Rectangle::getArea() * 2 + width * depth * 2 + height * depth * 2;
}

char* Parallelpiped::getColour() {
    return Rectangle::getColour();
}
/*
Parallelpiped::~Shape() {
    delete colour;
}*/