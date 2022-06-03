/*
*   Author: Dong Jun Kim
*   Purpose: The purpose of the code will be to read in an arbitrary number of characters from the user and 
*            prints the complete string capitalizing the vowels and making every other character lower case. 
*            A sentinel value of 0 will stop the program. 
*
*/
#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int main() {

    //string where the final output will be stored
    string word = "";
    
    do {

        //get input from user
        char input;
        cout << "Enter a character: ";
        cin >> input;

        //make vowels uppercase and everything else lowercase
        switch (input) {

        case 'a':
            input = toupper(input);
            break;
        
        case 'e':
            input = toupper(input);
            break;

        case 'i':
            input = toupper(input);
            break;

        case 'o':
            input = toupper(input);
            break;

        case 'u':
            input = toupper(input);
            break;

        case 'A':
            input = toupper(input);
            break;
        
        case 'E':
            input = toupper(input);
            break;

        case 'I':
            input = toupper(input);
            break;

        case 'O':
            input = toupper(input);
            break;

        case 'U':
            input = toupper(input);
            break;
        
        default:
        input = tolower(input);
            break;
            
        }

        //end loop when input is 0
        if(input == '0')
            break;
        //if its not 0, store it in word
        else
            word += input;

    } while(true);
    
    //print word
    cout << "Your String: " << word << endl;
    
}
