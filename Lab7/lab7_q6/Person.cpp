#include "Person.h"

using namespace std;

string Person::get_full_name() {
    return first_name + ' ' + last_name;
}

void Person::set_first_name(string first_name) {
    this->first_name = first_name;
}

void Person::set_last_name(string last_name) {
    this->last_name = last_name;
}

void Person::set_email(string email) {
    this->email = email;
}
