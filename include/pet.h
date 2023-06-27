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


Pet create_new_pet(std::string name, std::string type);

std::vector<Pet> add_pet_to_vector(std::vector<Pet>& pets, Pet new_pet);

int feed_pet(std::vector<Pet>& pets, std::string name);

int play_with_pet(std::vector<Pet>& pets, std::string name);

int put_to_sleep(std::vector<Pet>& pets, std::string name);

int get_pet_happiness(std::vector<Pet>& pets, std::string name);
int get_pet_fullness(std::vector<Pet>& pets, std::string name);
int get_pet_energy(std::vector<Pet>& pets, std::string name);

#endif