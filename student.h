#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"
#include <string>

using namespace std;

class Student : public Person {
private:
    int taking;         // Courses being taken.
    string courses[10]; // Array to store course names.

public:
    Student(const string &name, const string courses[], int taking);
    string getCourses() const;
    virtual ~Student();
};

#endif // STUDENT_H
