#pragma once

#include <iostream>
#include <cmath>

using namespace std;

class Shape2d {
    public:
        virtual double = area();
};

class Circle {
public:
    Circle(double radius) : radius(radius) {}

    double area() {
        return M_PI * radius * radius;
    }

private:
    double radius;
};

class Square {
public:
    Square(double side) : side(side) {}

    double area() {
        return side * side;
    }

private:
    double side;
};

class Triangle {
public:
    Triangle(double base, double height) : base(base), height(height) {}

    double area() {
        return 0.5 * base * height;
    }

private:
    double base;
    double height;
};
