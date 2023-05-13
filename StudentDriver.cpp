// Benjamin Craven | bcraven1

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

#include "Student.h"
#include "UnivMember.h"
#include "Student.cpp"
#include "UnivMember.cpp"
#include "Name.cpp"
#include "ID.cpp"

int main()
{
    Student s1, s2, s3, s4;

    // set student 1 information
    s1.setUnivName("Cyrus,Miley");
    s1.set_year(3);
    s1.set_GPA(3.95);

    // set student 2 information
    s2.setUnivName("Gaga,Lady");
    s2.set_year(1);
    s2.set_GPA(3.08);

    // set student 3 information
    s3.setUnivName("Grande,Ariana");
    s3.set_year(4);
    s3.set_GPA(2.79);

    // set student 4 information
    s4.setUnivName("Keys,Alicia");
    s4.set_year(2);
    s4.set_GPA(3.44);

    ofstream outfile;
    outfile.open("output.txt");

    outfile << s1 << endl << s2 << endl << s3 << endl << s4 << endl;

    outfile.close();

    return 0;
}
