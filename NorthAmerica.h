#ifndef ANIMALWORLD_NORTHAMERICA_H
#define ANIMALWORLD_NORTHAMERICA_H

#include "Continent.h"
#include "Bison.h"
#include "Wolf.h"

// Класс NorthAmerica наследуется от Continent и представляет собой конкретный континент - Северная Америка
class NorthAmerica : public Continent
{
public:
    // Реализация функции CreateHerbivore: создает бизона
    Herbivore* CreateHerbivore() const override
    {
        return new Bison(120); // Бизон весом 120
    }

    // Реализация функции CreateCarnivore: создает волка
    Carnivore* CreateCarnivore() const override
    {
        return new Wolf(130); // Волк с силой 130
    }
};

#endif //ANIMALWORLD_NORTHAMERICA_H
