#ifndef ANIMAL_H
#define ANIMAL_H

#include "Mammal.h"
#include <iostream>

// Клас ТВАРИНИ
class Animal : public Mammal {
public:
    void describe() const override;
};

#endif // ANIMAL_H
