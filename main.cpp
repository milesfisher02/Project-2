#include <iostream>
#include "Person.h"
#include "Student.h"
#include "Professor.h"
#include <limits>

using namespace std;

int main() {
    // Declare variables to store student information, course details, professor names, professor rooms, and the number of courses.
    string studentName;
    string studentCourses[10];
    string professorNames[10];
    string professorRooms[10];
    int numCourses = 0;

    // Input student name using getline.
    cout << "Enter student name: ";
    getline(cin, studentName);

    // Input courses and professor information using a do-while loop.
    char addMoreCourses;
    do {
        if (numCourses < 10) {
            // Input course name for the current course.
            cout << endl << "Enter a course: ";
            getline(cin, studentCourses[numCourses]);

            // Input professor name for the current course.
            cout << endl << "Enter professor name for the course: ";
            getline(cin, professorNames[numCourses]);

            // Input professor's room for the current course.
            cout << endl << "Enter professor's room for the course: ";
            getline(cin, professorRooms[numCourses]);

            numCourses++; // Increase the course count.
        } else {
            cout << endl << "You've reached the maximum number of courses (10)." << endl;
            break; // Exit the loop when the maximum courses are added.
        }

        // Ask if the user wants to add more courses.
        cout << endl << "Do you want to add more courses? (Y/N): ";
        cin >> addMoreCourses;
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Consume newline.
    } while (addMoreCourses == 'Y' || addMoreCourses == 'y');

    // Output student name
    cout << endl << "Student: " << studentName << endl << endl;
    cout << "Courses:" << endl << endl;

    for (int i = 0; i < numCourses; ++i) {
        // Output details for each course.
        cout << "Course Name: " << studentCourses[i] << endl << endl;
        cout << "Professor Name: " << professorNames[i] << endl << endl;
        cout << "Professor Room: " << professorRooms[i] << endl << endl;
        cout << endl;
    }

    return 0;
}
