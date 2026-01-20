#include <iostream>
using namespace std;                                //Make menu of this - Say hello, add two num, exit

void hello() {
    cout << "Hello" << endl;
}

int add(){
    int a, b;

    cin >> a;
    cin >> b;

    return a+b;
}

int main() {
    int choice;

    bool out = true;

    while(out) {
        cin >> choice;
        switch(choice) {
        case 1:
        hello();
        break;
        case 2:
        cout << add() << endl; 
        break;
        case 3:
        out = false;
        break;
        default:
        cout << "Invalid input" << endl;
    }
    }
    return 0;
}

