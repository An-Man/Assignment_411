#include "pet.h"
#include "print.h"
#include <iostream>
#include <string>
#include <vector>

void print_stats(std::vector<Pet>& pets, std::string name)
{
    std::cout << "Pet name: " << name << '\n';
    std::cout << "Happiness: " << get_pet_happiness(pets, name) << '\n';
    std::cout << "Fullness: " << get_pet_fullness(pets, name) << '\n';
    std::cout << "Energy: " << get_pet_energy(pets, name) << '\n';
}

void print_was_fed()
{
    std::cout << "The pet was fed. Happiness +25, Fullness +25.\n";
}

void print_played()
{
    std::cout << "You played with pet. Happiness +25, Energy -25.\n";
}

void print_is_asleep()
{
    std::cout << "The pet is asleep. Energy 100.\n";
}

void print_file_error()
{
    std::cout << "File error.\n";
}

void print_saved_to_file()
{
    std::cout << "Saved pet state to file.\n";
}