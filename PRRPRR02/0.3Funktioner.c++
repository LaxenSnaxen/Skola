#include <iostream>

using namespace std;


string getWordStartingWithLetter(char letter)
{
    string word;
    do 
    {
        std::cout << "Ange ett ord som börjar med bokstaven " << letter << endl;
        std::cin >> word;
    }
    while(word[0]!= letter);
    return word;
}

getWordStartingWithLetter('B')