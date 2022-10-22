#include <iostream>
using std::cout;
using std::endl;

#include "person.h"

Person::~Person() {
    cout << "Destructing Person" << endl;
}

void Person::AddResource() {
    resource.reset();
    resource = std::make_shared<Resource>(GetName());
}