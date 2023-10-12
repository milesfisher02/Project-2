#ifndef PROFESSOR_H
#define PROFESSOR_H

#include "Person.h"
#include <string>

using namespace std;

class Professor : public Person {
private:
    string office; // Office room number

public:
    Professor(const string& name, const string& office);
    string getOffice() const;
};

#endif
