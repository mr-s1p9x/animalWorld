#include <iostream>
#include "Africa.h"
#include "NorthAmerica.h"
#include "AnimalWorld.h"

using namespace std;

int main() {
    // Создаем объекты континентов Африка и Северная Америка
    Continent* africa = new Africa();
    Continent* northAmerica = new NorthAmerica();

    // Создаем объекты мира животных для каждого континента
    AnimalWorld* africaWorld = new AnimalWorld(africa);
    AnimalWorld* americaWorld = new AnimalWorld(northAmerica);

    // Симуляция жизни животных в Африке
    cout << "Africa:" << endl;
    africaWorld->Mealsherbivores(); // Травоядные в Африке едят траву
    africaWorld->NutritionCarnivores(); // Плотоядные в Африке охотятся на травоядных

    cout << endl;

    // Симуляция жизни животных в Северной Америке
    cout << "North America:" << endl;
    americaWorld->Mealsherbivores(); // Травоядные в Северной Америке едят траву
    americaWorld->NutritionCarnivores(); // Плотоядные в Северной Америке охотятся на травоядных

    // Очистка памяти: удаление объектов мира животных и континентов
    delete africaWorld;
    delete americaWorld;
    delete africa;
    delete northAmerica;

    return 0;
}
