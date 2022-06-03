#include "TaskIO.h"

int main() {

    char command;
    int num;
    
    cout << "Task List " << endl
         << endl
         << "COMMANDS" << endl
         << "v - View pending tasks " << endl
         << "a - Add a task" << endl
         << "c - Complete a task" << endl
         << "h - History of completed tasks" << endl
         << "x - Exit" << endl;
    
    //read task_list.txt file and store data into list
    TaskList list = TaskIO::readFile();

    while (true) {

        //get user action input
        cout << "\nCommand: ";
        cin >> command;

        num = 0;

        //switch statement for user action
        switch (command) {

        //view incomplete tasks
        case 'v':
            for (int i = 0; i < list.getSize(); i++) {
                if (list[i].getCompleted() == 0) {
                    num++;
                    cout << num << ". " << list[i].getDescription() << endl;
                }
            }
            break;

        //add task by getting description and set completed to 0
        case 'a': {

            //get description from user
            string description;
            cout << "Description: ";
            cin.ignore();
            getline(cin, description);

            //new task object with the description from user
            Task t(description, 0);
            list += t;
            break;
        }
            
        //complete task by setting completed to 1
        case 'c': {

            //getting choice from user
            int choice;
            cout << "Number: ";
            cin >> choice;

            //calculate the size of completed task
            int completeSize = 0;
            for (int i = 0; i < list.getSize(); i++) {
                if (list[i].getCompleted() == 0) {
                    completeSize++;
                }
            }

            //making sure the input from the user is in range
            if( (choice < 1) || (choice > completeSize) ) {
                cout << "Task number " << choice << " doesn't exist" << endl;
                break;
            }

            //set comleted of the choses task to 1
            for (int i = 0; i < list.getSize(); i++) {
                if (list[i].getCompleted() == 0) {
                    num++;
                    if (num == choice) {
                        list[i].setCompleted(1);
                        break;
                    }
                }
            }
            break;
        }

        //view competed tasks
        case 'h':
            for (int i = 0; i < list.getSize(); i++) {
                if (list[i].getCompleted() == 1) {
                    num++;
                    cout << num << ". " << list[i].getDescription() << " (DONE!) " << endl;
                }
            }
            break;

        //end program and write file with modified information
        case 'x':
            TaskIO::writeFile(list);
            cout << "Bye!" << endl;
            return 0;

        }

    }

}