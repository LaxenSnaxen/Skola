#pragma once

#include <iostream>
#include <string>

using namespace std;

class Animal
{
    public:
        int age;
        string name;

        Animal(int a, string n) : age(a), name(n) {}
};

class Dog : public Animal 
{
    public:

        string breed;

        Dog(int a, string n, string b) : Animal(a, n), breed(b) {};

        void woof() {
            cout << name << " says Woof!" << endl;
        };
};

class Snake : public Animal 
{
    public:
        bool poisonous;

        Snake(int a, string n, bool p) : Animal(a, n), poisonous(p) {};

        void bite() {
            cout << name << " bites you!";
            if (poisonous) {
                cout << " You got poisoned!";
            }
            cout << endl;
        };
};
