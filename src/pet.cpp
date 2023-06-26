#include "pet.h"
#include <iostream>
#include <string>
#include <vector>

//Pet functions

Pet create_new_pet()
{
    Pet new_pet;
    new_pet.name = input_pet_name();
    new_pet.type = input_pet_type();
    new_pet.happiness = 50;
    new_pet.fullness = 50;
    new_pet.is_sleeping = false;

    return new_pet;
}

std::vector<Pet> add_pet_to_vector(std::vector<Pet>& pets, Pet new_pet)
{
    pets.push_back(new_pet);

    return pets;
}

std::string input_pet_name()
{
    std::cout << "Enter pet name: ";
    std::string name;
    std::getline(std::cin >> std::ws, name);
    return name;
}

std::string input_pet_type()
{
    while (true)
    {
        std::cout << "Choose pet type: (a) cat (b) dog (c) bird ?: ";
        char input_type;
        std::cin >> input_type;

        switch (input_type)
        {
            case 'a':
            {
                return "cat";
            }
            case 'b':
            {
                return "dog"; 
            }
            case 'c':
            {
                return "bird";
            }
            default:
            {
                break;
            }
        } 
    }
}

void feed_pet(std::vector<Pet>& pets)
{
    std::string inp_name{input_pet_name()};

    for (Pet& pet : pets)
    {
        if (pet.name == inp_name)
        {
            pet.fullness += 25;
            pet.happiness += 25;
            std::cout << "Pet fullness +25, now: " << pet.fullness <<'\n';
            std::cout << "Pet happiness +25, now: " << pet.fullness <<'\n';
        }
    }
}