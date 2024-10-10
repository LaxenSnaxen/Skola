#pragma once

#include <iostream>
#include <string>

using namespace std;

class vehicle
{
    public:
        int maxSpeed;
        string color;
    
        vehicle (int m, string c) : maxSpeed(m), color(c) {}
};

class Car : public vehicle {
public:
    int doors;

    Car(int m, string c, int d) : vehicle(m, c), doors(d) {}

    void go() {
        cout << "The " << color << " car honks!" << endl;
    }
};

class Bicycle : public vehicle {
public:
    bool hasBasket;

    Bicycle(int m, string c, bool h) : vehicle(m, c), hasBasket(h) {}

    void ringBell() {
        cout << "The " << color << " bicycle rings the bell!" << endl;
    }
};