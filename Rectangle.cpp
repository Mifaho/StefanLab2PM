#include "Rectangle.h"

Rectangle::Rectangle(char* colour, double height, double width):Shape(colour),height(height), width(width){
    
}

double Rectangle::getArea(){
    return height * width;
}

char* Rectangle::getColour(){
    return colour;
}
/*
Rectangle::~Shape() {
    delete colour;
}*/