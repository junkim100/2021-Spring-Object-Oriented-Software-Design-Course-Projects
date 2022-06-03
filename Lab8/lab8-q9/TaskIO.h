#ifndef TaskIO_H
#define TaskIO_H

#include "TaskList.h"
#include <fstream>

//class TaskIO
class TaskIO {

    public:
        //read the file (task_list.txt)
        static TaskList readFile();

        //write to the file (task_list.txt)
        static void writeFile(TaskList);

};

#endif