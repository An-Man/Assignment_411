#include "fileop.h"
#include "pet.h"
#include "print.h"
#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include <sstream>

int print_to_file(std::vector<Pet>& pets, std::string filename)
{
    std::ofstream outputfile(filename);

        if (!outputfile.is_open())
        {
            print_file_error();
            return -1;
        }
    for (Pet& pet : pets)
    {
        outputfile << pet.name << ',' << pet.type << ',' << pet.happiness << ','
            << pet.fullness << ',' << pet.energy << ',' << pet.is_sleeping << '\n';
    }
    outputfile.close();
    print_saved_to_file();
    return 0;
}


std::vector<Pet> load_from_file(std::string filename)
{
    std::ifstream inputfile(filename);
    
    if (!inputfile.is_open())
    {
        print_file_error(); // throw exception? return empty pet?
    }

    std::string line;
    
    std::getline(inputfile, line);
    std::istringstream iss(line);
    std::string input;

    Pet saved_pet {};
    std::getline(iss, input, ',');
        saved_pet.name = input;
    std::getline(iss, input, ',');
        saved_pet.type = input;
    std::getline(iss, input, ',');
        saved_pet.happiness = std::stoi(input);
    std::getline(iss, input, ',');
        saved_pet.fullness = std::stoi(input);
    std::getline(iss, input, ',');
        saved_pet.energy = std::stoi(input);
    std::getline(iss, input, ',');
        saved_pet.is_sleeping = std::stoi(input);          

    inputfile.close();
    
    std::vector<Pet> saved {};
    saved.push_back(saved_pet);

    return saved;
} 
