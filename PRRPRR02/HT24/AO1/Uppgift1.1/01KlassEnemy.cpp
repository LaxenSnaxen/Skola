#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

// Klassen beskriver data och beteende hos *alla* fiender.
class Enemy {
public:
    // Egenskaper
    string type;
    string status;
    int x, y;
    int strength;

    // Konstruktor
    Enemy(string type, string status, int x, int y, int strength) : type(type), status(status), x(x), y(y), strength(strength)
    { };

    Enemy(int x, int y) : x(x), y(y), type("Commoner"), status("HEALTHY"), strength(3)
    {status = "HEAlTHY"; };

    // Metod
    int attack() 
    {
        // Slumpar ett tal 1-6 (en d6).
        if (status != "PARALYZED")
            {
                int modifier = rand() % 6 + 1;
                return strength + modifier;
            }
        else
            {
                return 0;
            }
    };
};


int main() {
    // Behövs innan man kan använda rand().
    srand(time(NULL));

    // Använda klassen och skapa några objekt (specifika personer)
    Enemy enemy1("Goblin", "HEALTHY", 12, 24, 5);
    Enemy enemy2("Angry Seagull", "HEALTHY", 0, 0, 2);
    Enemy boss("Final Boss", "PARALYZED", 23, 12, 100);
    Enemy commoner(0,0);

    cout << enemy1.type << " attacks you, dealing " << enemy1.attack() << " damage!" << endl;
    cout << enemy2.type << " attacks you, dealing " << enemy2.attack() << " damage!" << endl;
    cout << boss.type << " attacks you, dealing " << boss.attack() << " damage!" << endl;
    cout << commoner.type << " attacks you dealing " << commoner.attack() << " damage!" << endl;
    cin.get();

    return 0;
}