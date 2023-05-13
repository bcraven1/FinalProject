#include <iostream>
#include <string>
#include <sstream>
using namespace std;

#include "Student.h"
#include "Name.h"


Student::Student() {            // default constructor sets role of student objects to student
    setRole("Student");
}

Student::~Student() {}

void Student::set_GPA(double gpa) {
    GPA = gpa;
}

void Student::set_year(short y) {
    year = y;
}

double Student::get_GPA() {
    return GPA;
}

short Student::get_year() {
    return year;
}

ostream& operator << (ostream& output, Student& obj) {      // overload insertion operator (<<)
    output << "Role: " << obj.getRole() << endl
        << "Name: " << obj.getUnivName() << endl
        << "Year: " << obj.get_year() << endl
        << "GPA: " << obj.get_GPA() << endl;
    return output;
}