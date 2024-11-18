#pragma once

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class car
{
    public:
    car(string registration, string model, string brand, bool hired) : registration(registration), model(model), brand(brand), hired(hired) {};

    void setRegistration(string registration)
    {
        this->registration = registration;
    };
    void setModel(string model)
    {
        this->model = model;
    };
    void setBrand(string brand)
    {
        this->brand = brand;
    };

    string getRegistration()
    {
        return this->registration;
    };
    string setModel()
    {
        return this->model;
    };
    string getBrand()
    {
        return this->brand;
    };
    
    private:
    string registration;
    string model;
    string brand;
    bool hired;
    
};