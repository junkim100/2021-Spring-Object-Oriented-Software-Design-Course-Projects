#ifndef ArrayBag_H
#define ArrayBag_H

#include <iostream>
using namespace std;

//class template
template <typename T>
class ArrayBag
{
private:
    //a private built in array
    T *array;
    int size;
    static const int capacity = 1000;

public:

//no-argument constructor
ArrayBag()
{
    //set capacity of array to 1000
    array = new T[capacity];
    //set size to 0
    size = 0;
}

~ArrayBag()
{
    delete[] array;
}

//returns size
int getSize()
{
    return size;
}

//returns true if bag is empty and false otherwise
bool isEmpty()
{
    if (size == 0)
        return true;
    else
        return false;
}

//returns true if bag is full and false otherwise
bool isFull()
{
    if (size == capacity)
        return true;
    else
        return false;
}

//adds a T type value to the array and increase size by 1 then returns true if succesful
bool add(T a)
{
    if (isFull())
        return false;

    array[size] = a;
    size++;
    return true;
}

//removes a T type value from the array and decrease size by 1 then returns true if succesful
bool remove(T a)
{
    if (isEmpty())
        return false;

    for (int i = size; i > 0; i--)
    {
        if (array[i] == a)
        {
            for (int j = i; j < size; j++)
                array[j] = array[j + 1];

            size--;
            return true;
        }
    }
    return false;
}

//returns true if T type variable from the parameter is contained by array
bool contains(T a)
{
    for (int i = 0; i < size; i++)
    {
        if (array[i] == a)
            return true;
    }
    return false;
}

//empty the array by making size 0
void makeEmpty()
{
    size = 0;
}

//prints Elements
void printElements()
{
    for (int i = 0; i < size; i++)
        cout << array[i] << endl;
}
};

#endif