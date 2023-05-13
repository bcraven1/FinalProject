// Benjamin Craven | bcraven1

#ifndef ID_H
#define ID_H

#include<string>
#include<iostream>
using namespace std;

class FID {
    public:
        FID();
        ~FID();
        void setID_number();
        void setID(int num);
        string combineID(int num);
        void print();
        friend ostream& operator << (ostream& out, FID& id);

    private:
        int ID_number;
        string full_ID;
};

#endif
