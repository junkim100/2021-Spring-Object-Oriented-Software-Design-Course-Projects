/*
*   Author: Dong Jun Kim
*   Purpose: The purpose of the code is to generate 10 random integers and check whether the user inputed integer is one of those 10 random integers or not
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

int main() {

    cout << "Binary Search Program\n\n" << "Enter 0 to exit\n\n";

    //the vector of 10 reserved spaced which will be used to store the randomly generated integers
    vector<int> numbers;
    numbers.reserve(10);

    //generate 10 random integers from 1 to 100 and push back into numbers vector
    srand(time(nullptr));
    for (int i = 0; i < 10; i++) {
        int number = rand() % 100 + 1;
        numbers.push_back(number);
    }
    //sorting is neccesary to use binary_search() later
    sort(numbers.begin(), numbers.end());

    //print the 10 random integers
    cout << "Random numbers: [";
    for (int i = 0; i < 9; i++) {
        cout << numbers.at(i) << ", ";
    }
    cout << numbers.at(9);
    cout << "]\n\n";

    //get input from user and use binary_search to see if the input is inside numbers vector
    while (true){
        int input;
        cout << "Enter a number from 1 to 100: ";
        cin >> input;
        if (input == 0){
            cout << "Bye!" << endl;
            break;
        } else if ((input < 0) || (input > 100)) {
            continue;
        } else if (binary_search(numbers.begin(), numbers.end(), input)) {
            cout << input << " is in random numbers.\n" << endl;
        } else {
            cout << input << " is NOT in random numbers.\n" << endl;
        }
    }

}
