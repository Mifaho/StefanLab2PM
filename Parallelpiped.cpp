#include "Parallelpiped.h"

Parallelpiped::Parallelpiped(char* newcolour, double height, double width, double depth):Rectangle(newcolour, height, width), depth(depth){
    
}

double Parallelpiped::getArea() {
    //return Rectangle::getArea() * depth;
    return height * width * 2 + width * depth * 2 + height * depth * 2;
}

char* Parallelpiped::getColour() {
    return colour;
}
/*
Parallelpiped::~Shape() {
    delete colour;
}*/