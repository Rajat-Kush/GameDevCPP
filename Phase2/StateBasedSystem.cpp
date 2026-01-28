#include <iostream>
using namespace std;

enum State{
    MENU,
    ADD,
    REMOVE,
    EXIT
};

int main(){

    State state = MENU;

    bool isRunning = true;
    int choice;

    while(isRunning){
        switch(state){
            case MENU:
                cout << "---This is Menu---" << endl;
                cout << "1. ADD" << endl;
                cout << "2. REMOVE" << endl;
                cout << "3. EXIT" << endl;
                cout << "Enter choice: ";
                cin >> choice;

                if(choice == 1){
                    state = ADD;
                }
                else if(choice == 2){
                    state = REMOVE;
                }
                else if(choice == 3){
                    state = EXIT;
                }
                else{
                    cout << "Enter correct choice." << endl;
                }
                break;
            
            case ADD:
                cout << "Entered ADD state" << endl;
                cout << "Adding..." << endl;
                state = MENU;
                break;
            
            case REMOVE: 
                cout << "Entered REMOVE state" << endl;
                cout << "Removing..." << endl;
                state = MENU;
                break;

            case EXIT:
                cout << "Entered EXIT state" << endl;
                cout << "Exiting..." << endl;
                isRunning = false;
                break;
        }
    }
}