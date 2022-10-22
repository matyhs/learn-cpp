#include <iostream>
using std::cout;
using std::endl;

#include <memory>
using std::shared_ptr;
using std::make_shared;

#include "metaperson.h"

int GetAge(Person const& p) { return p.GetAge(); }

int main() {
    Person p("Normal", "Person", 10);
    Metaperson mp("Artificial", "Human", 1, "huart");

    Person &rp = mp;
    Metaperson &rmp = mp;
    cout << rp.GetName() << endl;
    cout << rmp.GetName() << endl;

    Person *p_ptr = &mp;
    Metaperson *mp_ptr = &mp;
    cout << p_ptr->GetName() << endl;
    cout << mp_ptr->GetName() << endl;

    shared_ptr<Person> s_ptr = make_shared<Metaperson>("Artificial", "Humanoid", 2, "humoid");
    cout << s_ptr->GetName() << endl;

    cout << GetAge(rp) << endl;
    cout << GetAge(rmp) << endl;

    Metaperson *static_ptr = static_cast<Metaperson*>(p_ptr);
    cout << static_ptr->GetIGN() << endl;

    Metaperson *dyn_ptr = dynamic_cast<Metaperson*>(&mp);
    cout << dyn_ptr->GetIGN() << endl;
}