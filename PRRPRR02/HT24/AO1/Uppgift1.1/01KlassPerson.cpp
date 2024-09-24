#include <iostream>

using namespace std;

class convenientLength {
    public:
    float length;

    convenientLength(float length) : length(length)
    {};

    float m ()
    {
        return length;
    };
    float cm()
    {
        return length * 100.0f;
    };
    float mm()
    {
        return length * 1000.0f;
    };
    float ft()
    {
        return length * 3.28084f;
    };
    float in()
    {
        return length * 39.36f;
    };

    float byCountry(string country)
    {
        if(country == "USA")
            {
                return ft();
            }

        else
            {
                return cm();
            }
    }
};

// Klassen beskriver data och beteende hos *alla* människor.
class person {
public:
    // Egenskaper
    string name;
    string country;
    int age;
    convenientLength length; // Centimeter

    // Konstruktor
    person(string name, string country, int age, float length) : name(name), country(country), age(age), length(length)
    { };

    person(string name) : name(name), country("SVERIGEEEEE"), age(0), length(0.0f)
    { };

    // Metod
    void greet() {
        cout << "Hej, jag heter " << name;
        cout << " och jag är " << age << " år gammal." << endl;
        if (country == "USA")
            {
                cout << "Jag är "<< length.byCountry(country) << " ft lång." << endl;
            }
        else
            {
                cout << "Jag är "<< length.byCountry(country) << " cm lång." << endl;
            }
        cout << "Jag kommer inte berätta mitt personnummer!\n" << endl;
    };
private:
    int socialSecurity;
};


int main() {
    // Använda klassen och skapa några objekt (specifika personer).
    person dave("Dave", "Sverige", 19, 1.84);
    person angela("Angela", "Tyskland", 24, 1.73);
    person jacob("Jacob", "USA", 27, 1.30);
    person ted("Ted");

    dave.greet();
    angela.greet();
    jacob.greet();
    ted.greet();
    cin.get();

    return 0;
}