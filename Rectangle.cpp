#include "Rectangle.h"

Rectangle::Rectangle(double height, double width):height(height), width(width){
    
}

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