#ifndef FILEOP_H
#define FILEOP_H
#include "pet.h"
#include <string>
#include <vector>

int print_to_file(std::vector<Pet>& pets, std::string filename);

std::vector<Pet> load_from_file(std::string filename);

#endif