#include "Mammal.h"
#include "Human.h"
#include "Horse.h"
#include "Cow.h"
#include <vector>

int main() {
    // Створення об'єктів через поліморфізм
    std::vector<Mammal*> mammals = {
        new Human(),
        new Horse(),
        new Cow()
    };

    // Виклик відповідних функцій
    for (const auto& mammal : mammals) {
        mammal->describe();
    }

    // Звільнення пам'яті
    for (const auto& mammal : mammals) {
        delete mammal;
    }

    return 0;
}
