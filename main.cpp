// Assignment 4_1_1
// Virtual Pet Simulator
// - working with git "issues"

#include "pet.h"
#include <iostream>

std::vector<Pet> pets {};

int main()
{
    add_pet_to_vector(pets, create_new_pet());

    for (Pet& pet: pets) // prints created pets so far; a test
    {
        std::cout << pet.name << ", " << pet.type << '\n';
    }

    feed_pet(pets); // feeds a pet

    play_with_pet(pets); // play with a pet
    
    return 0;
}