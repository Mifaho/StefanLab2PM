#include "Shape.h"
#include "Circle.h"
#include "Cylinder.h"
#include "Parallelpiped.h"
#include "Rectangle.h"
#include "Roundedrectangle.h"

#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <memory>


size_t maxsize;

void getData(std::vector<std::unique_ptr<Shape>>&vec) {
    std::cout << "colours" << std::endl;
    double totalarea = 0;
    for (size_t i = 0; i < vec.size(); i++) {
        totalarea = totalarea + vec.at(i)->getArea();
        std::cout << vec.at(i)->getColour() << ", ";
    }
    std::cout << std::endl << std::endl << "total area size: " << totalarea << std::endl;
}

int main(int argc, char** argv) {
    std::vector<std::unique_ptr < Shape>> vec;
    vec.emplace_back(new Circle("red", 10));
    vec.emplace_back(new Parallelpiped("blue", 10, 15, 20));
    vec.emplace_back(new Cylinder("green", 10, 15));
    vec.emplace_back(new Roundedrectangle("black", 10, 15, 1));
    vec.emplace_back(new Rectangle("yellow", 10, 5));
    vec.emplace_back(new Circle("purple", 12));
    vec.emplace_back(new Circle("pink", 13));
    vec.emplace_back(new Circle("white", 14));
    vec.emplace_back(new Circle("brown", 15));
    vec.emplace_back(new Circle("grey", 16));
    getData(vec);
    //Shape* temp = new Shape();
    //array[0] = new Circle();
    /*for (size_t i = 0; i < 10; i++) {
        array[i] = new Circle();
    }*/
    return 0;
}

