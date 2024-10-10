#include <iostream>
#include <06Workers.h>

#include <string>
using namespace std;

int main()
{
    doctor theDoctor(true, true, 1, 10, "Doctor doctor");
    teacher illegalAndBadTeacher(false, false, 10, 5, false);

    theDoctor.printSort();
    illegalAndBadTeacher.disciplinaryAction();

    illegalAndBadTeacher.payTaxes();

    return 0;
};