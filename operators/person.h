#pragma once

#include <string>

class Person {
    private:
        std::string first_name;
        std::string last_name;
        int age;
        // friend function to allow free function to access private fields
        friend bool operator<(int i, Person const& p);
    public:
        Person(std::string first_name,
                std::string last_name,
                int age);
        ~Person();
        std::string GetName() const;
        int GetAge() const { return age; }
        void SetAge(int age) { Person::age = age; }
        // member function operator overload
        bool operator<(Person const& p) const;
        bool operator<(int i) const;
};
// free function operator overload
bool operator<(int i, Person const& p);