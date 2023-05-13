#include "ID.h"
#include <string>
#include <iostream>
using namespace std;

FID::FID() {                // default constructor
    setID_number();
    full_ID = 'A' + to_string(ID_number);
}

FID::~FID() {}

void FID::setID_number() {         // generate numbers in ID
    static int num = 10000000;
    ID_number = num;
    num++;
}

void FID::print() {
    cout << full_ID;        // print ID
}
    