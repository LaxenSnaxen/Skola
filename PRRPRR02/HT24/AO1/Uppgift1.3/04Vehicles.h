#pragma once

#include <iostream>
#include <string>

using namespace std;

class Car {
public:
    int maxSpeed;
    string color;
    int doors;

    Car(int m, string c, int d) : maxSpeed(m), color(c), doors(d) {}

    void go() {
        cout << "The " << color << " car honks!" << endl;
    }
};

class Bicycle {
public:
    int maxSpeed;
    string color;
    bool hasBasket;

    Bicycle(int m, string c, bool h) : maxSpeed(m), color(c), hasBasket(h) {}

    void ringBell() {
        cout << "The " << color << " bicycle rings the bell!" << endl;
    }
};