#ifndef MAMMAL_H
#define MAMMAL_H

// Абстрактний клас ССАВЦІ
class Mammal {
public:
    virtual void describe() const = 0; // Чиста віртуальна функція
    virtual ~Mammal() = default;      // Віртуальний деструктор
};

#endif // MAMMAL_H
