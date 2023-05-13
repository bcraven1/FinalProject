// bcraven1

#include <iostream>
using namespace std;
#ifndef NAME_H
#define NAME_H

class Name {
    public:
        Name();            
        Name(string str);  
        string getFirstName();
        string getLastName();
        void setFirstName(string firstName);
        void setLastName(string lastName);
        void printName();
        void deleteTrailingBlanks(string& str1);
        friend ostream& operator << (ostream & out, const Name& name);
    
    private:
        string fname;
        string lname;
};

#endif
