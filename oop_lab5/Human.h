#ifndef HUMAN_H
#define HUMAN_H

#include "Mammal.h"
#include <iostream>

// Клас ЛЮДИ
class Human : public Mammal {
public:
    void describe() const override;
};

#endif // HUMAN_H
