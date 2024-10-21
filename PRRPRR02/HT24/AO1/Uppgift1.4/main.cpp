#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // TODO: Skapa en vector för alla ord i namnet.
    
    // Skriv ut instruktioner.
    cout << "Skriv ditt namn, ett ord i taget." << endl;
    cout << "Du kan avsluta genom att trycka på ENTER." << endl;
    
    // Loop som ska hämta in alla ord, ett i taget,
    // tills användaren avslutar.
    vector <string> name = {};
    string npart;
    while(true) {
        getline(cin, npart);
        name.push_back(npart);
        // TODO: Lägg till ordet i vectorn.
        // Om användaren däremot trycker på ENTER igen, alltså
        // har gett hela namnet, ska vi då avsluta istället.
        if (npart == "\0")
            {
                break;
            }
    }
    
    cout << "Ditt fullständiga namn är: " << endl;
    // TODO: Skriv ut användarens fullständiga namn.
    
    for (auto & element : name) 
    {
        cout << element << " "; 
    }

    cout << endl;

    cout << "Dina initialer är: " << endl;
    // TODO: Skriv ut användarens initialer.

    for (auto & element : name) 
    {
        cout << element[0]; 
    }

    cout << endl;

    return 0;
}
