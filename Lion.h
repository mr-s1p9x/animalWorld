#ifndef ANIMALWORLD_LION_H
#define ANIMALWORLD_LION_H

#include "Carnivore.h"

// Класс Lion наследуется от Carnivore и представляет конкретное плотоядное животное
class Lion : public Carnivore
{
private:
    int power; // Сила льва

public:
    // Конструктор для инициализации силы льва
    Lion(int p) : power(p) {}

    // Реализация функции Eat: проверяет, может ли лев съесть травоядное
    void Eat(Herbivore* prey) override
    {
        if (prey -> IsAlive() && power > prey -> GetWeight())
        {
            power += 10; // Лев съедает травоядное и увеличивает свою силу
            prey->SetLife(false); // Травоядное умирает
            cout << "Lion hunts Wildebeest and eats it, gaining 10 power." << endl;
        }
        else
        {
            power -= 10; // Если лев не смог съесть травоядное, его сила уменьшается
            cout << "Lion hunts Wildebeest but fails and loses 10 power." << endl;
        }
    }

    // Реализация функции GetPower: возвращает текущую силу льва
    int GetPower() const override { return power; }
};

#endif //ANIMALWORLD_LION_H
