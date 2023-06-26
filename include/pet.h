#ifndef PET_H
#define PET_H

#include <string>
#include <vector>



struct Pet {
    std::string name {};
    std::string type {};
    int happiness {};
    int fullness {};
    int energy {};
    bool is_sleeping {false};
};

std::string input_pet_name();

std::string input_pet_type();

Pet create_new_pet();

std::vector<Pet> add_pet_to_vector(std::vector<Pet>& pets, Pet new_pet);

void feed_pet(std::vector<Pet>& pets);

void play_with_pet(std::vector<Pet>& pets);

void put_to_sleep(std::vector<Pet>& pets);

#endif