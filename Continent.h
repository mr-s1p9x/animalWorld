#ifndef ANIMALWORLD_CONTINENT_H
#define ANIMALWORLD_CONTINENT_H

#include "Herbivore.h"
#include "Carnivore.h"

// Абстрактный класс Continent, представляющий континент
class Continent
{
public:
    // Виртуальный дестркутор для корректного удаления объектов-наследников
    virtual ~Continent() {}

    // Чисто виртуальная функция для создания травоядного, должна быть реализована в наследнике
    virtual Herbivore* CreateHerbivore() const = 0;

    // Чисто виртуальная фукцния для создания плотоядного, должна быть реализована в наследнике
    virtual Carnivore* CreateCarnivore() const = 0;
};

#endif //ANIMALWORLD_CONTINENT_H
