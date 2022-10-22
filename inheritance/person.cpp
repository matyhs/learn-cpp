#include "person.h"

using std::string;

string Person::GetName() const {
    return first_name + " " + last_name;
}