#ifndef Person_H
#define Person_H

#include <string>

using namespace std;

class Person {

    private:
        string first_name;
        string last_name;
        string email;

    public:
        //setter functions
        void set_first_name(string);
        void set_last_name(string);
        void set_email(string);

        //getter functions
        string get_full_name();
        string get_email() { return email; }

};

#endif