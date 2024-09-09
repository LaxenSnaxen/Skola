#include <iostream>
using namespace std;

/*
INSTRUKTIONER:

Ta bort kommentarerna från linje 84-86 för att testa om koden fungerar!
Jag skulle dock rekommendera att inte ha mer än en funktion 'okommenterad', det skadar säkert inte, men jag inte lova något.

*/


string getWordStartingWithLetter(char letter)
{
    string word;
    do 
    {
        cout << "Ange ett ord som börjar med bokstaven " << "'" << letter << "' " << endl;
        cin >> word;
    }
    while(word[0] != letter);
    return word;
}

float metresToFeet()
{
    float metres;
    cout << "Ange hur långt något är i meter: " << endl;
    cin >> metres;
    float feet = metres * 3.28084;

    return feet;
}

float kilogramsToPounds()
{
    float kilograms;
    cout << "Ange hur tungt något är i kilogram: " << endl;
    cin >> kilograms;
    float pounds = kilograms * 2.20462262185;
    return pounds;
}

void insertAtEnd(float array[], int &n, float e)
{
    array[n] = e;
    n += 1;
}

float multipleKilogramsToPounds()
{   float kilograms;
    float values[32] = {0};
    int num = 0;
    do
    {

        cout << "Ange flera tal i kg, en i taget, skriv in ett tal och sedan enter. När du har angivitt så många tal du vill; skriv in ett negativt värde eller noll." << endl;
        cin >> kilograms;
        insertAtEnd(values, num, kilograms);
    } while (kilograms > 0);
    int n = 0;
    float pounds;

    for (int x = 0; x < 32; x++)
    {
        if (values[x] != 0 )
            n += 1;
    }
    float solvedValues[n] = {0};
    for (int x = 0; x < 32; x++)
    {
        if (values[x] != 0 )
        solvedValues[x] = values[x] * 2.20462262185;
        if (values[x] != 0) // Av någon anledning så funkade det inte utan denna linje kod, jag är alldeles okunnig för att förklara varför och där med kommer inte försöka.
        {
        cout << values[x] << " kg = " << solvedValues[x] << "lbs" << endl;
        }
    }
}

int main()
{
    char letter = 'a';
    //getWordStartingWithLetter(letter);
    //cout << metresToFeet() << " ft" << endl;
    //cout << kilogramsToPounds() << " lbs" << endl;
    multipleKilogramsToPounds();
    system("pause");
    return 0;
}