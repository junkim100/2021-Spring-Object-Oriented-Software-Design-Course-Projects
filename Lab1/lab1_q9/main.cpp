#include <iostream>
#include <cmath>

using namespace std;

int main() {

    //declare five doubles and use it to store the inputted numbers
    double one, two, three, four, five;
    cout << "Enter five numbers: ";
    cin >> one >> two >> three >> four >> five;

    //calculate sum, average, product using the five numbers
    double sum, average, product;
    sum = one + two + three + four + five;
    average = sum / 5;
    product = one * two * three * four * five;

    //print the output
    cout << "Sum: " << sum << endl;
    cout << "Average: " << average << endl;
    cout << "Product: " << product << endl;
    cout << "Absolute Values: " << abs(one) << " " << abs(two) << " " << abs(three) << " " << abs(four) << " " << abs(five) << " " << endl;
    cout << "Done" << endl;

}