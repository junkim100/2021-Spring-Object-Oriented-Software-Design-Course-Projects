#include "TaskIO.h"

TaskList TaskIO::readFile() {

    //open file
    ifstream myfile;
    myfile.open("task_list.txt");

    string description;
    TaskList list;
    int done;

    while (true) {
        
        //read description from text file
        getline(myfile, description, '\t');
        if (!myfile)
            break;
        
        //get the int value next to the description from text file
        myfile >> done;

        //new Task object with those information and add it to the list
        Task t(description, done);
        list += t;

        //to clear the next line character from being stored to description
        getline(myfile, description);

    }

    //close file
    myfile.close();

    //return the list with all the Task objects
    return list;
}


//write to the file
void TaskIO::writeFile(TaskList list) {

    //open file
    ofstream myfile;
    myfile.open("task_list.txt");

    //write description and completed (the integer) to the text file
    for (int i = 0; i < list.getSize(); i++) {
        myfile << list[i].getDescription() << '\t' << list[i].getCompleted() << endl;
    }

    //close file
    myfile.close();
}
