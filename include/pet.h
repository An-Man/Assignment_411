#ifndef PET_H
#define PET_H

#include <string>

struct Pet {
    std::string name {};
    std::string type {};
    int happiness {};
    int fullness {};
    int energy {};
    bool is_sleeping {false};
};

#endif