// bcraven1

#include <iostream>
#include <string>

using namespace std;

#include "UnivMember.h"
#include "ID.h"
#include "Name.h"

UnivMember::UnivMember() {
    setRole("Role");
}

FID UnivMember::getUnivID() {
    return UnivID;
}

Name UnivMember::getUnivName() {
    return UnivName;
}

string UnivMember::getRole() {
    return Role;
}

string UnivMember::getEmail() {
    return UnivEmail;
}

void UnivMember::setUnivID() {
    UnivID = FID();
}

void UnivMember::setUnivName(string uni_fullname) {
    UnivName = Name(uni_fullname);
}

void UnivMember::setRole(string role) {
    Role = role;
}

void UnivMember::PrintInfo() {
    cout << Role << ": ";
    UnivName.printName();
    cout << endl;
    cout << "ID: ";
    UnivID.print();
    cout << endl;
}

