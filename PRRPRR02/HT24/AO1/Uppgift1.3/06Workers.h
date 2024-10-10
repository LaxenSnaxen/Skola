#pragma once

#include <iostream>
#include <string>

using namespace std;

class worker
{
    public:
        bool willingnessToWork;
        bool paysTaxes;
        int stupidLevel;
        int level;

        worker(bool w, bool p, int s, int l) : willingnessToWork(w), paysTaxes(p), stupidLevel(s), level(l) {};

        void payTaxes()
        {
            if (paysTaxes = false)
            {
                paysTaxes = true;
            }
        }
};

class doctor : public worker
{
    public:
        string doctorSort;

        doctor(bool w, bool p, int s, int l, string d) :  worker(w, p, s, l), doctorSort(d) {};

        void printSort()
        {
            cout << "This doctor is a " << doctorSort << "." << endl;
        }
};

class teacher : public worker
{
    public:
        bool willingnessToLive;

        teacher(bool w, bool p, int s, int l, bool wl) : worker(w, p, s, l), willingnessToLive(wl) {};

        int disciplinaryAction()
        {
            cout << "Teacher attacks with 'Disciplinary Action'!" << endl;
            return (level / stupidLevel);
        }
};