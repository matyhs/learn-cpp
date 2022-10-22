#include <string>

class Person {
    private:
        std::string first_name;
        std::string last_name;
        int age;
    public:
        Person(std::string first_name, 
                std::string last_name,
                int age): first_name(first_name),
                last_name(last_name),
                age(age) {};
        std::string GetName() const { return first_name + " " + last_name; }
        int GetAge() const { return age; }
};