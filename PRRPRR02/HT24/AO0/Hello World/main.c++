#include <iostream>
#include <clocale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "swedish");
    cout << "Hello World!" << endl;
    cout << "Goodbye World!" << endl;
    int age = 15;
    bool student = true;
    string name = "Bartolomeus";

    if (age >=18)
    {
        cout << name << " får spela nät casino." << endl;
    }
    else
    {
        cout << name << " får inte spela nät casino." << endl;
    }

    if(age >= 6 && age <= 18)
    { 
        cout << name << " går förmodligen i skolan." << endl;
    }
    else
    {
        cout << name << " går kanske inte i skolan." << endl;
    }

    if(student || age >= 65)
    {
        cout << name << " får rabatt på buss biljetter." << endl;
    }
    else
    {
        cout << name << " får ingen rabatt på buss biljetter." << endl;
    }
    
    cin.get();
    return 0;
}