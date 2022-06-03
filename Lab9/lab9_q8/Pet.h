#ifndef Pet_H
#define Pet_H

#include <string>

using namespace std;

class Pet
{
private:
    //two private variables
    string name;
    string species;

public:
    //constructor receiving two strings and store them to name and species respectively
    Pet(string n, string s)
    {
        name = n;
        species = s;
    }

    //getter functions for the two private variables
    string get_name() { return name; }
    string get_species() { return species; }
};

#endif
