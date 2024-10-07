#pragma once

#include <iostream>
#include <string>

using namespace std;

class Device 
{
    public:
        string manafacturer;
        int year;

        Device(string m, int y) : manafacturer(m), year(y) {}
};

class Smartphone : public Device {
public:
    int cameraMegapixels;

    Smartphone(string m, int y, int cm) : Device(m, y), cameraMegapixels(cm) {}

    void takePhoto() {
        cout << "Taking a photo with a " << cameraMegapixels << " megapixel camera!" << endl;
    }

    void showTime() {
        cout << "The time is 8:23!" << endl;
    }
};

class Smartwatch : public Device{
public:
    bool waterproof;

    Smartwatch(string m, int y, bool wp) : Device(m, y), waterproof(wp) {}

    void showTime() {
        cout << "The time is 8:23!" << endl;
    }
};