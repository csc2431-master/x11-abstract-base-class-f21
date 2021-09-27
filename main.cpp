#include <iostream>
using std::cout;

#include "Bat.h"

void DisplayAnimal(const Animal& animal);

int main() {
    Bat bat("bat");

    cout << "*** Query bat object" << '\n';
    cout << bat << "\n";
    bat.Eat();
    bat.Walk();
    bat.Fly();
    bat.EchoLocate();

    cout << "*** Query bat object as an animal" << '\n';
    DisplayAnimal(bat);

    return 0;
}

void DisplayAnimal(const Animal& creature) {
    cout << creature << "\n";
    creature.Eat();
    creature.Walk();
    creature.Fly();
}

