#ifndef TaskList_H
#define TaskList_H

#include "Task.h"

//class TaskList
class TaskList {

    private:
        Task list[10];
        int size;

    public:
        //constructor
        TaskList();

        //getter with inline function
        int getSize() { return size; }

        //overloaded += operator
        void operator+=(Task);

        //overloaded subscript operator
        Task &operator[](int);

};

#endif