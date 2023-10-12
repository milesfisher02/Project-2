#ifndef PERSON_H
#define PERSON_H

#include <string>

using namespace std;

class Person
{
    protected:
    string name;    // Declaring the name of the person

    public:
        Person(const string &name);
        string getName() const;

        virtual ~Person();  // Person destructor

};

#endif // PERSON_H
