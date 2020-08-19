#include <iostream>

#include "Entity.h"
#include "Static_Array.h"

unsigned long long i = 0;
DataStructures::StaticArray<Entity::Entity, 10> entities;

int main()
{
    while(i < 10)
    {
        entities.Update().data = i;
        std::cout << entities.Update().data << '\n';
        i++;
        entities.Iterate();
    }

    std::cin.get();
}