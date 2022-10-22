#include "person.h"

using std::string;

Person::Person(string first_name,
                string last_name,
                int age): 
                first_name(first_name), last_name(last_name), age(age) {

}

Person::~Person() {

}

string Person::GetName() const {
    return first_name + " " + last_name;
}

bool Person::operator<(Person const& p) const {
    return age < p.age;
}

bool Person::operator<(int i) const {
    return age < i;
}

bool operator<(int i, Person const& p) {
    return i < p.age;
}