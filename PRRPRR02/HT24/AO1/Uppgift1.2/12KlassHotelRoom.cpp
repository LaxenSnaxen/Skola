#include <iostream>
#include <string>
#include "12KlassHotelRoom.h"

using namespace std;

int main() {
    HotelRoom room1;
    room1.number = 312; // Bör vara privat eftersom att det inte ska lätt kunna ändras och man inte ska kunna komma åt det.
    room1.booked = false; // Kanske inte borde vara privat, finns argument för båda. Man kanske vill ha det public eftersom man vill att det ska vara lätt att ändra. Dessutom så har inte alltid hotell sekretess på vilka som är inbokade i deras lokaler, fast även om de har sekretess vet jag inte om det är en anledning att ha privata egenskaper i ett c++ program.

    HotelRoom room2;
    room2.number = 316;
    room2.booked = false;

    room1.checkIn();
    room1.checkOut();
    room1.checkIn();

    // Vad är problemet?
    // Svara här i en kommentar.
    // När du har skrivit om klassen,
    // ta bort raden nedan.
    room2.number = -55;

    // Vad är problemet?
    // Svara här i en kommentar.
    // Ha kvar raden nedan.
    room2.checkOut();

    room1.printStatus();
    room2.printStatus();
}