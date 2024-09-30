#pragma once

#include <iostream>
#include <string>

using namespace std;

class HotelRoom {
public:

    void checkIn() {
        if (booked != true)
        {
        booked = true;

        cout << "Room #" << number << ": A guest checked in." << endl;
        }
        else
        {
            cout << "You've already checked in." << endl;
        }
    }

    void checkOut() {
        if (booked != false)
        {
        booked = false;

        cout << "Room #" << number << ": A guest checked out." << endl;
        }
        else
        {
            cout << "You've already checked out." << endl;
        }
    }

    void printStatus() {
        cout << "Room #" << number << " is: ";

        if(booked) {
            cout << "Booked" << endl;
        } else {
            cout << "Available" << endl;
        }
    }

    HotelRoom(int number, bool booked) : number(number), booked(booked)
    {};
private:
    int number;
    bool booked;
};