#pragma once
#include <iostream>
#include <string>

using namespace std;

class Settings
{
    public: 

    Settings(bool autoSave, string resolution, string quickKey, string settingsFile) : autoSave(autoSave), resolution(resolution), quickKey(quickKey), settingsFile(settingsFile) {};

    private:
    bool autoSave;
    string resolution;
    string quickKey;
    string settingsFile;

    void setResolution(string resolution)
    {
        this->resolution = resolution;
        cout << "Resolution set as: " << resolution << endl;
    }
    string getResolution()
    {
        cout << this->resolution << endl;
        return this->resolution;
    }

    void setAutoSave(bool autoSave)
    {
        this->autoSave = autoSave;
        cout << "Auto save set as: " << autoSave << endl;
    }
    bool getAutoSave()
    {
        cout << this->autoSave << endl;
        return this->autoSave;
    }

    void setQuickKey(string quickKey)
    {
        this->quickKey = quickKey;
        cout << "Quick key set as: " << quickKey << endl;
    }
    string getQuickKey()
    {
        cout << this->quickKey << endl;
        return this->quickKey;
    }

    void loadSettings(string settingsFile)
    {
        this->settingsFile = settingsFile;
        cout << "Settings loaded from file: " << settingsFile << endl;
    }
    void saveSettings(string settingsFile)
    {
        // Jag kommer inte att skriva en kod som kommer konvertera en string till en databas fil såsom Json.
    }

    void printSettings()
    {
        cout << "Resolution: " << resolution <<endl;
        cout << "Auto Save: " << autoSave <<endl;
        cout << "Quick key: " << quickKey <<endl;
        cout << "Settings file: " << settingsFile <<endl;
    }
};