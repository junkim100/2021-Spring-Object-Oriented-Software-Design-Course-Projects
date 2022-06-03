/*
*   Author: Dong Jun Kim
*   Purpose: The purpose of the code is to create an object oriented program that gets customer and employee information as user input and print out processed information
*/

#include "Customer.h"
#include "Employee.h"

#include <iostream>

using namespace std;

void customer_choice();
void employee_choice();

int main() {

    cout << "Customer/Employee Data Entry" << endl;

    char choice;
    char again = 'y';

    //while loop allows user to run code again
    while (again == 'y') {
        cout << "\nCustomer or employee? (c/e): ";
        cin >> choice;

        //run customer_choice() if user enters c
        if (choice == 'c')
            customer_choice();

        //run employee_choice() if user enters e
        else if (choice == 'e')
            employee_choice();

        //ask user if they want to continue
        cout << "Continue? (y/n): ";
        cin >> again;

    }

    cout << "\nBye!" << endl;

}

void customer_choice() {
    //create a customer object
    Customer c;

    string first_name, last_name, email, customer_num;

    //get customer information from user
    cout << "\nDATA ENTRY" << endl;
    cout << "First name: ";
    cin >> first_name;
    cout << "Last name: ";
    cin >> last_name;
    cout << "Email: ";
    cin >> email;
    cout << "Number: ";
    cin >> customer_num;
    cout << endl;
    
    //store it to the data member of the Customer object using setter function
    c.set_first_name(first_name);
    c.set_last_name(last_name);
    c.set_email(email);
    c.set_customer_num(customer_num);

    //print out the information using getter function
    cout << "CUSTOMER" << endl
         << "Name: " << c.get_full_name() << endl
         << "Email: " << c.get_email() << endl
         << "Number: " << c.get_customer_num() << endl
         << endl;
    
}

void employee_choice() {
    //create a employee object
    Employee e;

    string first_name, last_name, email, ssn;

    //get employee information from user
    cout << "\nDATA ENTRY" << endl;
    cout << "First name: ";
    cin >> first_name;
    cout << "Last name: ";
    cin >> last_name;
    cout << "Email: ";
    cin >> email;
    cout << "SSN: ";
    cin >> ssn;
    cout << endl;
    
    //store it to the data member of the Employee object using setter function
    e.set_first_name(first_name);
    e.set_last_name(last_name);
    e.set_email(email);
    e.set_ssn(ssn);

    //print out the information using getter function
    cout << "EMPLOYEE" << endl
         << "Name: " << e.get_full_name() << endl
         << "Email: " << e.get_email() << endl
         << "Number: " << e.get_ssn() << endl
         << endl;
    
}

