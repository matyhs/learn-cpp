#include "metaperson.h"

using std::string;

string Metaperson::GetName() const {
    return GetIGN() + ": " + Person::GetName();
}