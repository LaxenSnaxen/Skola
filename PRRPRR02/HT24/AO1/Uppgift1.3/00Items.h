#pragma once

#include <iostream>
#include <string>

using namespace std;

class Item
{
    public:
        string name;

        void pickUp() 
        {
            cout << "You found a " << name << " lying on the ground!" << endl;
        };

        Item(string n) : name(n) {}
};

class Potion : public Item
{
    public:
        int healthRestored;

        Potion(string n, int h) : Item(n), healthRestored(h) {}

        void use() {
            cout << "Using " << name << "! You restored " << healthRestored << " health points." << endl;
        }
};

class Weapon : public Item {
public:
    int damage;

    Weapon(string n, int d) : Item(n), damage(d) {}

    void attack() {
        cout << "Attacking with " << name << "! You dealt " << damage << " damage." << endl;
    }
};