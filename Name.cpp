// bcraven1

#include <iostream>
#include <string>
using namespace std;

#include "Name.h"


Name::Name() {              // default constructor
    fname = "First";
    lname = "Last";
}

Name::Name(string str) {        // constructor with string parameter
    int posOfComma = str.find(",");
    lname = str.substr(0, posOfComma);
    string first = str.substr((posOfComma + 1), (sizeof(str)));
    deleteTrailingBlanks(first);
    fname = first;
}

void Name::deleteTrailingBlanks(string& str1) {
    int posOfWhiteSpace = str1.find(" ");
    str1 = str1.substr(0, posOfWhiteSpace);
}

string Name::getFirstName() {
    return fname;
}

string Name::getLastName() {
    return lname;
}

void Name::setFirstName(string firstName) {
    fname = firstName;
}

void Name::setLastName(string lastName) {
    lname = lastName;
}

ostream& operator << (ostream& out, const Name& name) {
    out << name.fname << " " << name.lname;
    return out;
}


void Name::printName() {
    cout << fname << " " << lname;
}
