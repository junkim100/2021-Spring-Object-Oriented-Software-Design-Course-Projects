#include "TaskList.h"

//constructor
TaskList::TaskList() {
    size = 0;
}

//overloaded += operator
void TaskList::operator+=(Task t) {
    list[size] = t;
    size++;
}

//overloaded subscript operator
Task & TaskList::operator[](int i) {
    if (i < 0 || i >= size) {
        cout << "Out of bound" << endl;
    }
    return list[i];
}
