// Assignment 4_1_1
// Virtual Pet Simulator
// - working with git "issues"

#include "pet.h"
#include "print.h"
#include "fileop.h"
#include <iostream>

std::vector<Pet> pets {};

int main()
{
    // so far, no user interface
    // The functionalities are just tested here
    
    std::string name {"Bobby"};
    std::string type {"cat"};

    Pet new_pet = create_new_pet(name, type);

    add_pet_to_vector(pets, new_pet);

    print_stats(pets, name);

    feed_pet(pets, name);
    play_with_pet(pets, name);
    put_to_sleep(pets, name); 

    print_stats(pets, name);

    print_to_file(pets, "pet.txt");

    pets = load_from_file("pet.txt");

    print_stats(pets, name);

    return 0;
}