#include "ArrayBag.h"

int main()
{
     cout << "Multiset/Bag Test\n" << endl;
    
     //creating an ArrayBag object that gets string type as T
     ArrayBag <string> a;

     cout << "ELEMENTS" << endl;

     //adding then printing the elements
     a.add("John");
     a.add("Joel");
     a.add("Samantha");
     a.add("John");

     a.printElements();

     //testing the member functions of ArrayBag class
     cout << "\nisEmpty() returns " << std::boolalpha << a.isEmpty() << endl
          << "isFull() returns " << std::boolalpha << a.isFull() << endl
          << "contains() for John returns " << std::boolalpha << a.contains("John") << endl
          << "contains() for Bob returns " << std::boolalpha << a.contains("Bob") << endl << endl;


     cout << "Current size is: " << a.getSize() << endl;

     //removing John then printing the elements
     cout << "\nCalling remove()\n" << endl
          << "ELEMENTS" << endl;

     a.remove("John");
     a.printElements();

     cout << "Current size is: " << a.getSize() << endl;
     

     cout << "\nCalling makeEmpty()\n" << endl;

     a.makeEmpty();
     a.printElements();
     
     cout << "Current size is: " << a.getSize() << endl;
}