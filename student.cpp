#include "Student.h"
using namespace std;

Student::Student(const string& name, const string courses[], int taking)
    : Person(name), taking(taking) {
    for (int i = 0; i < taking && i < 10; ++i) {
        this->courses[i] = courses[i];
    }
}

string Student::getCourses() const {
    string courseList;
    for (int i = 0; i < taking; ++i) {
        courseList += courses[i];
        if (i < taking - 1) {
            courseList += ", ";
        }
    }
    return courseList;
}

Student::~Student() {
    // Destructor definition here, if needed.
}
