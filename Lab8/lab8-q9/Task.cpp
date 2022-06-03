#include "Task.h"

//2 constructor overloaded
Task::Task() {
    description = "";
    completed = false;
}
Task::Task(string description, int completed) {
    this->description = description;
    this->completed = completed;
}

//setter for completed
void Task::setCompleted(int completed) {
    this->completed = completed;
}

//overloaded insertion operator
ostream &operator<<(ostream &os, Task &t) {
    os << t.description << endl;
    os << boolalpha << t.completed << endl;

    return os;
}
