#ifndef HORSE_H
#define HORSE_H

#include "Animal.h"
#include <iostream>

// Клас КОНІ
class Horse : public Animal {
public:
    void describe() const override;
};

#endif // HORSE_H

