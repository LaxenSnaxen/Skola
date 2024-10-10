#pragma once

#include <iostream>
#include <string>

using namespace std;

class enemy
{
    public:
        int health;
        int damage;

        enemy(int h, int d) : health(h), damage(d) {}
};

class Goblin : public enemy{
public:
    Goblin(int h, int d) : enemy(h, d) {}

    void attack() {
        cout << "Goblin attacks, dealing " << damage << " damage." << endl;
    }

    void receiveDamage(int d) {
        health -= d;
        cout << "Goblin receives " << d << " damage! Health is now " << health << "." << endl;
    }
};

class Dragon : public enemy{
public:
    bool breathFire;

    Dragon(int h, int d, bool b) : enemy(h, d), breathFire(b) {}

    void attack() {
        cout << "Dragon attacks, dealing " << damage << " damage." << endl;
        if (breathFire) {
            cout << "Dragon breathes fire for additional damage." << endl;
        }
    }

    void receiveDamage(int d) {
        health -= d;
        cout << "Dragon receives " << d << " damage! Health is now " << health << "." << endl;
    }
};