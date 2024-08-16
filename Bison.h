#ifndef ANIMALWORLD_BISON_H
#define ANIMALWORLD_BISON_H

#include "Herbivore.h"
#include <iostream>
using namespace std;

// Класс Bison наследуется от Herbivore и представляет конкретное травоядное животное
class Bison : public Herbivore
{
private:
    int weight; // Вес бизона
    bool life; // Статус жизни

public:
    // Конструктор для инициализации веса и статуса жизни
    Bison(int w): weight(w), life(true) {}

    // Реализация функции EatGrass: увеличивает вес на 10
    void EatGrass() override
    {
        weight += 10;
        cout << "Bison eats grass and gains 10 weight." << endl;
    }

    // Реализация функции GetWeight: возвращает текущий вес
    int GetWeight() const override { return weight; }

    // Реализация функции IsAlive: возвращает статус жизни
    bool IsAlive() const override { return life; }

    // Метод для изменения статуса жизни
    void SetLife(bool status) { life = status; }
};

#endif //ANIMALWORLD_BISON_H
