#pragma once

#include <iostream>
#include <string>

using namespace std;

class Person 
{
    public:

        Person(string name, int age, string personnummer, bool hasLicense) : name(name), age(age), personnummer(personnummer), hasLicense(hasLicense)
        { };

        void introduce() {
            cout << "Hi, my name is " << name << " and I am " << age << " years old.\n";
            if(hasLicense) {
                cout << "I have my driver's license!" << endl;
            } else {
                cout << "No driver's license! :(" << endl;
            }
        };

        void haveBirthday() {
            age++;
            cout << name << " is now " << age << " years old!\n";
        };

        void acquireLicense() {
            if (age >= 18)
            {
                hasLicense = true;
                cout << name << " passed their driving test and has their license!\n";
            }
            else
            {
                cout << name << " is too young to take the driving test and get their license\n";
            }

        }
    private:
    string name;
    int age;
    string personnummer;
    bool hasLicense; // Om personen har körkort.
};