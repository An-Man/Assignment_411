#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "../include/doctest.h"
#include "../include/pet.h"
#include "../include/print.h"

// print functions and file operations functions are not tested

Pet parrot {"Poppy", "Parrot"};
Pet bunny {"Bob", "Bunny", 50, 25, 75, 0};
std::vector<Pet> test {bunny};

TEST_CASE("Create new pet") {
    CHECK(parrot.name == "Poppy");
    CHECK(parrot.type == "Parrot");
}

TEST_CASE("Add pet to vector") {
    // how to test adding stuff to vector -
    // it has to return a vector I believe
}

TEST_CASE("Feed pet") {
    CHECK(feed_pet(test, "Bob") == 0);
    CHECK(feed_pet(test, "Bill") == -1);
}

TEST_CASE("Play with pet") {
    CHECK(play_with_pet(test, "Bob") == 0);
    CHECK(play_with_pet(test, "Bill") == -1);
}

TEST_CASE("Put to sleep") {
    CHECK(put_to_sleep(test, "Bob") == 100);
    CHECK(put_to_sleep(test, "Bill") == -1);
}

TEST_CASE("Get stats") {
    Pet fish {"Wanda", "fish", 20, 40, 60, 0};
    test.push_back(fish);
    CHECK(get_pet_happiness(test, "Wanda") == 20);
    CHECK(get_pet_happiness(test, "Bill") == -1000);
    CHECK(get_pet_fullness(test, "Wanda") == 40);
    CHECK(get_pet_fullness(test, "Bill") == -1000);
    CHECK(get_pet_energy(test, "Wanda") == 60);
    CHECK(get_pet_energy(test, "Bill") == -1000);    
}



