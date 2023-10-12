#include "Professor.h"

using namespace std;

Professor::Professor(const string& name, const string& office)
    : Person(name), office(office) {}

string Professor::getOffice() const {
    return office;
}
