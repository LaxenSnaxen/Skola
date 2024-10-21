#include <iostream>
#include <string>
#include "01Shapes.h"

using namespace std;

template<typename T>

int main() {
    // ---- Innan polymorfism ----
    cout << "Innan polymorfism:" << endl;

    // Skapa alla former.
    Circle circle1(2.0);
    Square square2(6.0);
    Triangle triangle1(4.0, 2.0);
    Circle circle2(4.0);

    vector<Shape2d> shapes = {circle1, square2, triangle1, circle2}

    cout << sizeof(Shape2d) << endl;

    // Räkna ut den totala arean.
    double circ1Area = circle1.area();
    double square2Area = square2.area();
    double tri1Area = triangle1.area();
    double circ2Area = circle2.area();
    double totalArea = circ1Area + square2Area + tri1Area + circ2Area;

    cout << "Den totala arean är: " << totalArea << endl;


    // ---- Efter polymorfism ----
    cout << "Efter polymorfism:" << endl;
    
    // ...

    return 0;
}