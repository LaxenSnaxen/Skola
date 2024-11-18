#include <iostream>
#include "settings.h"

using namespace std;

int main()
{
    Settings gameSettings(true, "1920x1080", "F5");

    gameSettings.printSettings();

    gameSettings.setQuickKey("HOME");

}