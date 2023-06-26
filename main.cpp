// Assignment 4_1_1
// Virtual Pet Simulator
// - working with git "issues"

#include "pet.h"
#include <iostream>

std::vector<Pet> pets {};

int main()
{
    add_pet_to_vector(pets, create_new_pet());

    for (Pet& pet: pets )
    {
        std::cout << pet.name << ", " << pet.type << '\n';
    }

    return 0;
}