#include "Shape.h"

Shape::Shape(char* colour):colour(colour){
    
}

Shape::~Shape(){
    delete colour;
}
