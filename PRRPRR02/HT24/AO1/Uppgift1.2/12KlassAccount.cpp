#include <iostream>
#include <string>
#include "12KlassAccount.h"

int main() {
    BankAccount account1("19920608-1623", 1000.00);
    account1.personnummer = "19920608-1623"; // Precis som med person klassen är detta viktigt för att skydda personen samt deras ban konto, konsekvenserna skulle potentiellt vara katastrofala för den enskilde individen om deras personnummer ändras antingen på banken eller hos en myndighet.
    account1.balance = 1000.00;             // Det är viktigt att det finns fel meddelanden för deposit och withdraw, för och främst är det ologiskt att ange ett negativt tal samt så skulle det 'fucka' med programmet. Withdraw skulle lägga in pengar på konto eftersom två negativa blir ett positivt och tvärtom för deposit.

    BankAccount account2("20020405-9920", 200.00);
    account2.personnummer = "20020405-9220";
    account2.balance = 200.00;

    account1.deposit(200.00);
    account1.withdraw(500.00);

    // Vad är problemet?
    // Svara här i en kommentar.
    // När du har skrivit om klassen,
    // ta bort raden nedan.
    account1.balance = -1000;

    // Vad är problemet?
    // Svara här i en kommentar.
    // Ha kvar raden nedan (den borde skriva ut ett fel.)
    account2.withdraw(2000.00);

    return 0;
}