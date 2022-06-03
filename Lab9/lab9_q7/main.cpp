#include <iostream>

using namespace std;

void square(double *num);
void cube(double *num);
void pow(double *num, double base, int power);

int main()
{
    cout << "The MatheMagics App" << endl;

    while (true)
    {
        cout << "\nCommand Menu" << endl
             << "-------------" << endl
             << "square: perform squaring of a number" << endl
             << "cube: perform cubing of a number" << endl
             << "pow: raise a number to an integer power" << endl
             << "quit: quit the program." << endl;

        string choice;
        cout << "\nCommand: ";
        cin >> choice;

        //if statements for every choice
        if (choice == "square")
        {
            double num;
            cout << "Enter a number to square: ";
            cin >> num;

            //passing in the address of num as parameter for square()
            square(&num);
            cout << "Result: ";
            cout << num << endl;
        }
        else if (choice == "cube")
        {
            double num;
            cout << "Enter a number to cube: ";
            cin >> num;

            //passing in the address of num as parameter for cube()
            cube(&num);
            cout << "Result: ";
            cout << num << endl;
        }
        else if (choice == "pow")
        {
            double num = 0;
            double base;
            int power;
            cout << "Enter the base: ";
            cin >> base;
            cout << "Enter the integer exponent: ";
            cin >> power;

            //passing in the address of num as parameter for pow()
            pow(&num, base, power);
            cout << "Result: ";
            cout << num << endl;
        }
        else if (choice == "quit")
        {
            cout << "Bye!" << endl;

            //break out of the while loop
            break;
        }
    }
}

//square the value of the pointer variable recieved and store the value to that pointer variable
void square(double *num)
{
    if (num != nullptr)
        *num = *num * *num;
}

//cube the value of the pointer variable recieved and store the value to that pointer variable
void cube(double *num)
{
    if (num != nullptr)
        *num = *num * *num * *num;
}

//calculate base to the power of power then store the value to the pointer variable
void pow(double *num, double base, int power)
{
    if (num != nullptr)
    {
        //check if power is 0 because any number's power to the 0 is 1
        if (power == 0)
            *num = 1;
        else
        {
            *num = *num + base;
            for (int i = 0; i < power - 1; i++)
                *num = *num * base;
        }

    }
}
