// bcraven1

#ifndef UNIVMEMBERH
#define UNIVMEMBERH

#include <iostream>
#include <string>

using namespace std;

#include "ID.h"
#include "Name.h"

class UnivMember {
    public:
        UnivMember();
        FID getUnivID();
        Name getUnivName();
        string getRole();
        string getEmail();
        void setUnivID();
        void setUnivName(string uni_fullname);
        void setRole(string role);
        void setEmail(Name fullname);
        void PrintInfo();
    private:
        FID UnivID;
        Name UnivName;
        string Role;
        string UnivEmail;
};

#endif
