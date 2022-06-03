#include "Pet.h"
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    cout << "Dynamic Pets" << endl;

    vector<Pet *> pets;
    Pet *temp;

    while (true)
    {
        string name, species;
        char again;

        cout << "\nEnter the pet’s name: ";
        cin >> name;

        cout << "Enter the pet’s species: ";
        cin >> species;

        temp = new Pet(name, species);
        pets.push_back(temp);

        cout << "Add another pet? (y/n): ";
        cin >> again;

        if (again == 'y')
            continue;
        
        cout << endl;
        break;
    }

    for (int i = 0; i < pets.size(); i++)
    {
        cout << pets[i]->get_name() << " is a " << pets[i]->get_species() << endl;
    }

    cout << "\nBye!" << endl;
}
