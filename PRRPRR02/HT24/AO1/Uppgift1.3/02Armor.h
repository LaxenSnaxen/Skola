#pragma once

#include <iostream>
#include <string>

using namespace std;

class armour
{
    public:
        string name;
        int defense;

        armour(string n, int d) : name(n), defense(d) {}
};

class Shield : public armour{
public:

    Shield(string n, int d) : armour(n, d) {}

    void blockAttack() {
        cout << "Blocking with " << name << ", provides " << defense << " defense." << endl;
    }
};

class Chestplate : public armour {
public:
    bool isMagicResistant;

    Chestplate(string n, int d, bool m) : armour(n, d), isMagicResistant(m) {}

    void wear() {
        cout << "Wearing " << name << ", defense level " << defense;
        if (isMagicResistant) {
            cout << ", resistant to magic attacks.";
        }
        cout << endl;
    }
};