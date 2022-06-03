#ifndef Employee_H
#define Employee_H

#include "Person.h"
#include <string>

using namespace std;

class Employee : public Person {

    private:
        string ssn;
    
    public:
        //setter function
        void set_ssn(string);

        //getter function
        string get_ssn() { return ssn; }

};

#endif
