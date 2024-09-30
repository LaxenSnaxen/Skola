#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int cpuChoice()
{
    string choice[3] = {"Sten", "Sax", "Påse"};
    int randIndex = rand() % 4;
    return randIndex;
}

void stenSaxPåse()
{
    string choice[] = {"Sten", "Sax", "Påse"};
    string player;
    int cpu = cpuChoice();
    cout << "Ange 'Sten', 'Sax' eller 'Påse'!" << endl;
    cin >> player;
    if (find(begin(choice[3]), end(choice[3]), player) != end(choice[3]))
        {
            int n = sizeof(choice) / sizeof(choice[0]);
            string* targetPtr = find(&choice[0], choice + n, player);
            int targetIndex = targetPtr - choice;
            cout << "TargetPtr: "<< targetPtr << " TargetIndex: " << targetIndex << endl;
        };

}
