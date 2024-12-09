#ifndef COW_H
#define COW_H

#include "Animal.h"
#include <iostream>

// Клас КОРІВ
class Cow : public Animal {
public:
    void describe() const override;
};

#endif // COW_H

