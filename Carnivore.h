#ifndef ANIMALWORLD_CARNIVORE_H
#define ANIMALWORLD_CARNIVORE_H

#include "Herbivore.h"

// Абстрактный класс carnivore, представляющий плотоядное животное
class Carnivore
{
public:
    // Виртуальный дестркутор для корректного удаления объектов-наследников
    virtual ~Carnivore() {}

    // Чисто виртуальная функция для поедания травоядного, должна быть реализована в наследниках
    virtual void Eat(Herbivore* prey) = 0;

    // Чисто виртуальная функция, возвращающая силу животного, должна быть реализована в наследниках
    virtual int GetPower() const = 0;
};

#endif //ANIMALWORLD_CARNIVORE_H
