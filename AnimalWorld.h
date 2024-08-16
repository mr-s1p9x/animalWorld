#ifndef ANIMALWORLD_ANIMALWORLD_H
#define ANIMALWORLD_ANIMALWORLD_H

#include "Continent.h"

// Класс AnimalWorld представляет клиента, который управляет процессами в мире животных
class AnimalWorld
{
private:
    Herbivore* herbivore; // Указатель на травоядное животное
    Carnivore* carnivore; // Указатель на плотоядное животное

public:
    // Конструктор, который создает травоядное и плотоядное животное на основе переданного континента
    AnimalWorld(Continent* factory)
    {
        herbivore = factory->CreateHerbivore();
        carnivore = factory->CreateCarnivore();
    }

    // Деструктор для корректного удаления объектов
    ~AnimalWorld()
    {
        delete herbivore;
        delete carnivore;
    }

    // Метод, который инициирует процесс питания травоядных
    void Mealsherbivores()
    {
        herbivore->EatGrass();
    }

    // Метод, который инициирует процесс питания плотоядных
    void NutritionCarnivores()
    {
        carnivore->Eat(herbivore);
    }
};

#endif //ANIMALWORLD_ANIMALWORLD_H
