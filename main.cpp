#include "Circle.h"
#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <memory>

using namespace std;

size_t maxsize;

void getData(size_t size, Shape** array) {
    if (size <= maxsize) {
        double totalarea = 0;
        cout << "colours" << endl;
        for (size_t i = 0; i < size; i++) {
            totalarea = totalarea + array[i]->getArea();
            cout << array[i]->getColour() << ", ";
        }
        cout << endl << endl << "total area size: " << totalarea << endl;   
    }
}

int main(int argc, char** argv) {
    vector<std::unique_ptr<Shape>> vec;
    vec.emplace_back(new Circle());
    //Shape* temp = new Shape();
    //array[0] = new Circle();
    /*for (size_t i = 0; i < 10; i++) {
        
        array[i] = new Circle();
    }*/
    return 0;
}

