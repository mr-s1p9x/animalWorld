cmake_minimum_required(VERSION 3.28)
project(animalWorld)

set(CMAKE_CXX_STANDARD 17)

add_executable(animalWorld main.cpp
        Herbivore.h
        Carnivore.h
        Wildebeest.h
        Bison.h
        Lion.h
        Wolf.h
        Continent.h
        Africa.h
        NorthAmerica.h
        AnimalWorld.h)
