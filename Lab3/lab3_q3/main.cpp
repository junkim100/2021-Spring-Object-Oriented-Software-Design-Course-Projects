/*
*   Author: Dong Jun Kim
*   Purpose: The purpose of the code is to read monthly sales data from the monthly_sales.txt file then allow user to view the data or get yearly summary by entering commands
*/
#include <cstdlib>
#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>

using namespace std;

void monthly();
void yearly();

int main() {

    cout << "Monthly Sales\n\n" << "COMMAND MENU\n\n" << "m - View monthly sales\n" << "y - View yearly summary\n" << "x - Exit program\n";
    
    //loop for getting command input from the user
    while (true) {

        //get command input
        char command;
        cout << "\nCommand: ";
        cin >> command;
        cout << "\n";

        //if command is m, use monthly()
        if (command == 'm') {
            monthly();
        } 
        //if command is y, use yearly()
        else if (command == 'y') {
            yearly();
        } 
        //if command is x, use exit the while loop and end the program
        else if (command == 'x') {
            cout << "Bye!" << endl;
            break;
        } 
        //if command is unknown, go to the top of the loop
        else {
            cout << "Invalid command. Try again.\n";
        }

    }

}

//monthly() prints the monthly sales data from monthly_sales.txt
void monthly() {

    cout << "MONTHLY SALES" << endl;

    //read monthly_sales.txt
    ifstream input_file;
    input_file.open("monthly_sales.txt");

    //if file is opened successfully
    if (input_file) {
        string line;
        stringstream ss;
        string month;
        double sales;

        //read each line
        while (getline(input_file, line)){
            //replace stream buffer with current line then reset string stream error bits
            ss.str(line);
            ss.clear();

            //if there is one string and one double from the line
            if (ss >> month >> sales) {
                //print those data
                cout << fixed << setprecision(2);
                cout << setw(8) << left << month << setw(11) << right << sales << endl;
            }
        }
    }

    //close file
    input_file.close();

}

//yearly() prints the yearly total sale and average of all the months of the data from monthly_sales.txt
void yearly() {

    cout << "YEARLY SUMMARY" << endl;

    //read monthly_sales.txt
    ifstream input_file;
    input_file.open("monthly_sales.txt");

    //if file is opened successfully
    if (input_file) {
        string line;
        stringstream ss;
        double total = 0;
        string month;
        double sales;
        
        //read each line
        while (getline(input_file, line)) {
            //replace stream buffer with current line then reset string stream error bits
            ss.str(line);
            ss.clear();

            //if there is one string and one double from the line
            if (ss >> month >> sales) {
                //add the double value to total
                total += sales;
            }
        }

        double average = total / 12;

        //print those data
        cout << fixed << setprecision(2);
        cout << setw(20) << left << "Yearly total: " << setw(10) << right << total << endl;
        cout << setw(20) << left << "Monthly average: " << setw(10) << right << average << endl;
    }
    
    //close file
    input_file.close();

}
