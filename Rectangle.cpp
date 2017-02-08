#include "Rectangle.h"

double Rectangle::getArea(){
    return height * width;
}

char* Rectangle::getColour(){
    return Shape::colour;
}
/*
Rectangle::~Shape() {
    delete colour;
}*/