//
// Created by Max Benson on 8/7/2021.
//

#ifndef BAT_H
#define BAT_H

#include "animal.h"

class Bat : public Animal {
public:
    Bat(const string& name)
        : Animal(name) {
    }

    // Bat must both these methods now because Animal doesn't implement them
    void Walk() const override {
        cout << "   Bat::Walk() [overridden-virtual-method]: I CANNOT walk!" << '\n';
    }
    void Fly() const  override  {
        cout << "   Bat::Fly() [overridden-virtual-method]: I can fly!" << "\n";
    }
    // Bat adds this method
    void EchoLocate() const {
        cout << "   Bat::EchoLocate() [Bat-specific-method]: I can echo locate too!" << "\n";
    }
};


#endif //BAT_H
