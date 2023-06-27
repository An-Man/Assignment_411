#include "../include/pet.h"
// #include "../include/print.h"
#include <iostream>
#include <string>
#include <vector>

//Pet functions

Pet create_new_pet(std::string name, std::string type)
{
    Pet new_pet;
    new_pet.name = name,
    new_pet.type = type,
    new_pet.happiness = 50;
    new_pet.fullness = 50;
    new_pet.energy = 50;
    new_pet.is_sleeping = false;

    return new_pet;
}

std::vector<Pet> add_pet_to_vector(std::vector<Pet>& pets, Pet new_pet)
{
    pets.push_back(new_pet);

    return pets;
}


int feed_pet(std::vector<Pet>& pets, std::string name)
{
    for (Pet& pet : pets)
    {
        if (pet.name == name)
        {
            pet.fullness += 25;
            pet.happiness += 25;
            // print_was_fed();
            return 0;
        }
    }
    return -1;
}

int play_with_pet(std::vector<Pet>& pets, std::string name)
{
    for (Pet& pet : pets)
    {
        if (pet.name == name)
        {
            pet.energy -= 25;
            pet.happiness += 25;
            // print_played();
            return 0;
        } 
    }
    return -1;
}

int put_to_sleep(std::vector<Pet>& pets, std::string name)
{
    for (Pet& pet : pets)
    {
        if (pet.name == name)
        {
            pet.energy = 100;
            pet.is_sleeping = true;
            // print_is_asleep()
            return pet.energy;
        }
    }
    return -1;
}

int get_pet_happiness(std::vector<Pet>& pets, std::string name)
{
    for (Pet& pet : pets)
    {
        if (pet.name == name) {
            return pet.happiness;
        }     
    }
    return -1000;
}

int get_pet_fullness(std::vector<Pet>& pets, std::string name)
{
    for (Pet& pet : pets)
    {
        if (pet.name == name) {
            return pet.fullness;
        }
    }
    return -1000;
}

int get_pet_energy(std::vector<Pet>& pets, std::string name)
{
    for (Pet& pet : pets)
    {
        if (pet.name == name) {
            return pet.energy;
        }
    }
    return -1000;
}
