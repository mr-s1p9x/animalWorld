#ifndef ANIMALWORLD_AFRICA_H
#define ANIMALWORLD_AFRICA_H

#include "Continent.h"
#include "Wildebeest.h"
#include "Lion.h"

// Класс Africa наследуется от Continent представляет конкретный континент - Африку
class Africa : public Continent
{
public:
    // Реализация функции CreateHerbivore: создает антилопу Гну
    Herbivore* CreateHerbivore() const override
    {
        return new Wildebeest(100); // Антилопа с весом 100
    }

    // Реализация функции CreateCarnivore: создает льва
    Carnivore* CreateCarnivore() const override
    {
        return new Lion(150); // Лев с силой 150
    }
};

#endif //ANIMALWORLD_AFRICA_H
