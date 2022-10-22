#include <iostream>
using std::cout;
using std::endl;

#include "person.h"
using std::unique_ptr;
using std::make_unique;

int main() {
    {
        Person p("Sample", "User", 10);
        p.AddResource();
        cout << p.GetResourceName() << endl;
        p.AddResource();
        cout << p.GetResourceName() << endl;
        Person p1 = p; 
        cout << p1.GetResourceName() << endl;
    }

    // raw pointer vs smart pointer
    Person * p = new Person{"Sample", "User", 10};
    p->AddResource();
    delete p;

    auto p_smart = make_unique<Person>("Sample", "User", 10);
    p->AddResource();
}