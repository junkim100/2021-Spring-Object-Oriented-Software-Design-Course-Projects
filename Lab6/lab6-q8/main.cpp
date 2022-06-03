/*
*   Author: Dong Jun Kim
*   Purpose: The purpose of the code is to create a rectangle calculator using classes
*/

#include "Rect.h"

using namespace std;

int main() {

    cout << "Rectangle Calculator" << endl;
    
    char again;

    do {
        
        int height, width;

        //get height and width input from user
        cout << "\nHeight: ";
        cin >> height;
        cout << "Width: ";
        cin >> width;

        //create a new Rect object
        Rect rectangle = Rect(height, width);

        //print the calculated perimeter and area value
        cout << "Perimeter: " << rectangle.get_perimeter() << endl << "Area: " << rectangle. get_area() << endl;

        //print the string representation of the rectangle
        rectangle.string_representation();
        cout << endl;

        //ask if the user wants to continue or quit
        while (true) {
            cout << "\nContinue? (y/n): ";
            cin >> again;

            if(again == 'y') {
                break;
            } else if (again == 'n') {
                cout << "\nBye!" << endl;
                break;
            } else {
                continue;
            }
        }

    } while (again == 'y');

    

    return 0;
}