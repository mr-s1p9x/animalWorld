#ifndef ANIMALWORLD_WOLF_H
#define ANIMALWORLD_WOLF_H

#include "Carnivore.h"

// Класс Wolf наследуется от Carnivore и представляет конкретное плотоядное животное
class Wolf: public Carnivore
{
private:
    int power; // Сила волка

public:
    // Конструктор для инициализации силы волка
    Wolf(int p) : power(p) {}

    // Реализация функции Eat: проверяет, может ли волк съесть травоядное
    void Eat(Herbivore* prey) override
    {
        // Если волк сильнее травоядного и оно живо
        if (prey -> IsAlive() && power > prey -> GetWeight())
        {
            power += 10; // Волк съедает травоядное и его сила увеличивается
            prey ->SetLife(false); // травоядное умирает
            cout << "Wolf hunts Bison and eats it, gaining 10 power." << endl;
        }
        else
        {
            power -= 10; // Если волк не смог съесть травоядное - его сила уменьшается
            cout << "Wolf hunts Bison but fails and loses 10 power." << endl;
        }
    }

    // Реализация функции GetPower: возвращает текущую силу волка
    int GetPower() const override { return power; }
};

#endif //ANIMALWORLD_WOLF_H
