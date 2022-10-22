#pragma once

#include <string>

class Person {
    private:
        std::string first_name;
        std::string last_name;
        int age;
    public:
        Person(std::string first,
                std::string last,
                int age): first_name(first),
                last_name(last),
                age(age) {};
        virtual ~Person() = default;
        virtual std::string GetName() const;
        virtual int GetAge() const { return age; }
};