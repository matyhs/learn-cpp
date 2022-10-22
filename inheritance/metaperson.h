#pragma once

#include "person.h"

class Metaperson: public Person {
    private:
        std::string ign;
    public:
        Metaperson(std::string first,
                    std::string last,
                    int age,
                    std::string handle): Person(first, last, age),
                    ign(handle) {};
        std::string GetName() const;
        int GetAge() const { return Person::GetAge() + 100; }
        std::string GetIGN() const { return ign; }
};