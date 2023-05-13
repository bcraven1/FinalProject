// Benjamin Craven | bcraven1

#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>
using namespace std;

#include "Name.h"
#include "UnivMember.h"

class Student : public UnivMember{
    public:
        Student();      // constructor
        ~Student();     // destructor
        void set_GPA(double gpa);       // mutators
        void set_year(short y);
        double get_GPA();       // accessors
        short get_year();
        friend ostream& operator << (ostream& output, Student& obj);  // function overload  
    private:
        double GPA;
        short year;
};

#endif
