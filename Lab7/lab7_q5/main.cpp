/*
*   Author: Dong Jun Kim
*   Purpose: The purpose of the code is to create an object oriented program that gets size of list from user, create a list of random integer of that size, and prints the integers, count, total and average
*/

#include "RandomIntVector.h"

#include <iostream>

using namespace std;

int main() {

    int count;
    char again = 'y';

    cout << "Random Integer List" << endl
         << endl
         << "How many random integers should the list contain?: ";

    //get size of the list from user
    cin >> count;

    cout << endl
         << "Random Integers" << endl
         << "===============" << endl;
    

    //while loop allows user to run code again
    while (again == 'y') {

        //create a RandomIntVector object
        RandomIntVector riv(count);

        //print the information using the getter functions
        cout << setw(10) << left << "Integers: " << riv.get_str() << endl 
             << setw(10) << left << "Count: " << riv.get_count() << endl 
             << setw(10) << left << "Total: " << riv.get_total() << endl 
             << setw(10) << left << "Average: " << riv.get_average() << endl;

        //ask user if they want to continue
        cout << "\nContinue? (y/n): ";
        cin >> again;
        cout << endl;

    }

    cout << "Bye!" << endl;
    
}
