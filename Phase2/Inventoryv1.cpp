#include <bits/stdc++.h>
using namespace std;

struct Item {
    int id;
    int quantity;
};

void addItem(Item item[], int &count) {
    cout << "Enter id: ";
    cin >> item[count].id;

    cout << "Enter quantity: ";
    cin >> item[count].quantity; 
    
}

void removeItem(Item item[], int &count) {
    if (count == 0) {
        cout << "Inventory empty." << endl;
        return;
    }

    int key;
    cout << "Enter id you want to remove: ";
    cin >> key;

    int index = -1;

    for (int i = 0; i < count; i++) {
        if (item[i].id == key) {
            index = i;
            break;
        }
    }

    if (index == -1) {
        cout << "Item not found." << endl;
        return;
    }

    for (int i = index; i < count - 1; i++) {
        item[i] = item[i + 1];
    }
    count--;
}


void viewItem(Item item[], int count) {
    for (int i = 0; i < count; i++){
        cout << "Item " << i+1 << endl;
        cout << item[i].id << endl;
        cout << item[i].quantity << endl;
    }
}

int main() {
    int n;
    int count = 0;

    Item item[10];

    bool isRunning = true;

    int choice;

    while(isRunning) {

        cout << "---------Inventory-------" << endl;
        cout << "1. Add Item" << endl;
        cout << "2. Remove Item" << endl;
        cout << "3. View Item" << endl;
        cout << "4. Exit" << endl;

        cin >> choice;

        switch(choice){
            case 1:
                if (count < 10){
                    addItem(item, count);
                    count++;
                }
                else {
                    cout << "No more than 10 Item." << endl;
                }
                break;
            case 2:
                removeItem(item, count);
                break;
            case 3:
                viewItem(item, count);
                break;
            case 4:
                isRunning = false;
                break;
            default:
                cout << "Enter Correct Input" << endl;

        }
    }

    return 0;
}
