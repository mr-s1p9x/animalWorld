#ifndef ANIMALWORLD_HERBIVORE_H
#define ANIMALWORLD_HERBIVORE_H

// Абстрактный класс Herbivore, представляющий травоядное животное
class Herbivore
{
public:
    // Виртуальный дестркутор, который нужен для корректного удаления объектов-наследников
    virtual ~Herbivore() {}

    // Чисто виртуальная функция для поедания травы, должна быть реализована в наследниках
    virtual void EatGrass() = 0;

    // Чисто виртуальная функция, возвращающая вес животного, должна быть реализована в наследниках
    virtual int GetWeight() const = 0;

    // Чисто виртуальная функция, проверяющая, живо ли животное, должна быть реализована в наследниках
    virtual bool IsAlive() const = 0;

    virtual void SetLife(bool status) = 0;
};

#endif //ANIMALWORLD_HERBIVORE_H
