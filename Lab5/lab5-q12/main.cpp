/*
*   Author: Dong Jun Kim
*   Purpose: The purpose of the code is to get an integer input from the user and check if it is a prime number and if it isn't, tell the user what its factors are
*/

#include <iostream>
#include <cstdlib>
#include <vector>
#include <numeric>

using namespace std;

void display_vector(vector<int> numbers);
void calculate(int input, vector<int> factors);

int main() {

    while(true) {
        
        vector<int> factors;
        int input;

        cout << "Prime Number Checker\n\n" << "Please enter an integer between 1 and 5000: ";

        //exception that checks if input is in the correct range and give an error message if it isn't
        try {
            cin >> input;
            if((input < 1) || (input > 5000))
                throw 0;
        } catch(...){
            cout << "ERROR: Invalid Input Range" << endl;
            break;
        }

        //calculate the input's factors and store it in factors vector
        for (int i = 1; i <= input; i++) {
            if((input%i) == 0) {
                factors.push_back(i);
            }
        }

        calculate(input, factors);

        //asks the user to try again or not
        char again;
        cout << "\n\nTry again? (y/n): ";
        cin >> again;
        cout << endl << endl;

        //continues if y and end program if n
        if(again == 'y') {
            continue;
        } else if(again == 'n') {
            cout << "Bye!" << endl;
            break;
        }

    }

}

//displays the int values stored inside the vector
void display_vector(vector<int> numbers) {
    for(int i = 0; i < numbers.size(); i++) {
        cout << numbers.at(i) << ' ';
    }
}

//more than 2 factors mean input is not a prime number
void calculate(int input, vector<int> factors) {
    if(factors.size() > 2) {
        cout << input << " is NOT a prime number.\n" << "It has " << factors.size() << " factors: ";
        display_vector(factors);
    } else {
        cout << input << " is a prime number.";
    }
}
