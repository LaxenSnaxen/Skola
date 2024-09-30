#include <iostream>
#include <string>
#include "12KlassPerson.h"

int main() {
    Person p("John", 25, "19920608-1623", true);

    p.introduce();
    p.haveBirthday();

    // Vad är problemet?
    // Svara här i en kommentar.
    // När du har skrivit om klassen,
    // ta bort raden nedan.
    p.age = -5; // Samma sak här som med det under, ålder ska inte kunna ändras bara så där.

    // Vad är problemet?
    // Svara här i en kommentar.
    // När du har skrivit om klassen,
    // ta bort raden nedan.
    p.personnummer = "20040722-3292"; // Det går inte att ändra personnummer eftersom det är en privat egenskap, detta ör viktigt för att skydd identiteten av individen.

    p.introduce();

    Person p2("Erick", 11, "20040723-4442", false);

    // Vad är problemet?
    // Svara här i en kommentar.
    // Ha kvar raden nedan.
    p2.acquireLicense();

    p2.introduce();

    return 0;
}
