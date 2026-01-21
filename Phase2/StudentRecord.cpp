#include <bits/stdc++.h>
using namespace std;

struct Student {
    int id;
    int age;
};

void addStudent(Student &st) {
    cout << "Enter id: ";
    cin >> st.id;

    cout << "Enter age: ";
    cin >> st.age; 
    
}

void viewStudent(Student student[], int count) {
    for (int i = 0; i < count; i++){
        cout << "Student " << i+1 << endl;
        cout << student[i].id << endl;
        cout << student[i].age << endl;
    }
}

int main() {
    int n;
    int count = 0;

    Student student[10];

    bool isRunning = true;

    int choice;

    while(isRunning) {

        cout << "---------Student Record-------" << endl;
        cout << "1. Add Student" << endl;
        cout << "2. View Students" << endl;
        cout << "3. Exit" << endl;

        cin >> choice;

        switch(choice){
            case 1:
                if (count < 10){
                    addStudent(student[count]);
                    count++;
                }
                else {
                    cout << "No more than 10 student." << endl;
                }
                break;
            case 2:
                viewStudent(student, count);
                break;
            case 3:
                isRunning = false;
                break;
            default:
                cout << "Enter Correct Input" << endl;

        }
    }

    return 0;
}
