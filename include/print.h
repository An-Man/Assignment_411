#ifndef PRINT_H
#define PRINT_H
#include "pet.h"
#include <iostream>
#include <string>
#include <vector>

void print_stats(std::vector<Pet>& pets, std::string name);

void print_was_fed();

void print_played();

void print_is_asleep();

#endif