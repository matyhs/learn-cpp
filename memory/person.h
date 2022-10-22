#include <memory>

#include "resource.h"

class Person {
    private:
        std::string first_name;
        std::string last_name;
        int age;
        std::shared_ptr<Resource> resource;
    public:
        Person(std::string first_name,
                std::string last_name,
                int age): first_name(first_name),
                last_name(last_name),
                age(age),
                resource(nullptr) { };
        ~Person();
        std::string GetName() const { return first_name + " " + last_name; }
        int GetAge() const { return age; }
        std::string GetResourceName() const { return resource ? resource->GetName() : ""; }
        void AddResource();
};