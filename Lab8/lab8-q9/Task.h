#ifndef Task_H
#define Task_H

#include <iostream>
using namespace std;

//class Task
class Task {

    private:
        string description;
        int completed;

    public:
        //2 constructor overloaded
        Task();
        Task(string, int);

        //getters with inline function
        string getDescription() { return description; }
        bool getCompleted() { return completed; }

        //setter for completed
        void setCompleted(int);

        //overloaded insertion operator
        friend ostream &operator<<(ostream &os, Task &t);

};

#endif