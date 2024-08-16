#ifndef ANIMALWORLD_WILDEBEEST_H
#define ANIMALWORLD_WILDEBEEST_H

#include "Herbivore.h"
#include <iostream>
using namespace std;

// Класс Wildebeest наследуется от Herbivore и представляет конкретное травоядное животное
class Wildebeest : public Herbivore
{
private:
    int weight; // Вес антилопы
    bool life; // Статус жизни (жива или нет)

public:
    // Конструктор для инициализации веса и статуса жизни
    Wildebeest(int w) : weight(w), life(true) {}

    // Реализация функции EatGrass: увеличивает весь на 10
    void EatGrass() override
    {
        weight += 10;
        cout << "Wildebeest eats grass and gains 10 weight." << endl;
    }

    // Реализация функции GetWeight: возвращает текущий вес
    int GetWeight() const override { return weight; }

    // Реализация функции IsAlive: возвращает статус жизни
    bool IsAlive() const override { return life; }

    // Метод для изменения статуса жизни
    void SetLife(bool status) { life = status; }
};

#endif //ANIMALWORLD_WILDEBEEST_H
