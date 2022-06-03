#ifndef Customer_H
#define Customer_H

#include "Person.h"
#include <string>

using namespace std;

class Customer : public Person {

    private:
        string customer_num;
    
    public:
        //setter function
        void set_customer_num(string);

        //getter function
        string get_customer_num() { return customer_num; }

};

#endif
