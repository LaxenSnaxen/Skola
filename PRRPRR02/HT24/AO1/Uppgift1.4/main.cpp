#include <iostream>
#include <string>
#include <vector>

using namespace std;

void convertToInitial(string *name)
{
    (*name) = (*name)[0];
}

int main()
{
    string jacob = "Jacob";
    convertToInitial(&jacob);
    cout << jacob << endl;

    // Skapa en variabel, den heter x.
    int x = 20;

    cout << "Värdet är: " << x << endl;

    // Pointer: Adress till data.
    // När man skapar: Datatyp stjärna.
    // När man bestämmer adress: och-tecken och vilken variabel.
    int *p = &x;

    cout << "P värdet: " << p << endl;

    // Detta hämtar vad adressen innehåller och inte vad adressen är.
    cout << "Värdet som p pekar åt: " << *p << endl;

    // Arrays.
    int numbers[] = {2, 4, 6, 8};
    //               0, 1, 2, 3

    cout << numbers[0] << endl;

    // Pointer till en array, notera att man inte behöver ett och-tecken.
    // q är int hela array'en, utan det första värdet.
    int *q = numbers;
    int *t = q + 1;
    q = q + 2;
    cout << *t << endl;

    // Vektorer
    vector<int> betterNumbers 
    {
        2, 4, 6, 8
    };

    // Kan ändra och hämta saker som en vanlig array.
    betterNumbers[2] = 5;

    // Nu kan vi även lägga till saker i efterhand.

    betterNumbers.push_back(13);

    betterNumbers.insert(betterNumbers.begin() + 2,-1);
    

    cout << "Alla siffror: " << betterNumbers.size() << " st" <<  endl;
    // For x in, loopa över alla saker i en lista.
    for(int x : betterNumbers)
    {
        cout << x << endl;
    }

    return 0;
}