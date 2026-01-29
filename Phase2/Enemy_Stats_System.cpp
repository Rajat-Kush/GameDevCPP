#include <iostream>
using namespace std;

struct Enemy {
    int id;
    int health;
};

void addEnemy(Enemy enemies[], int &count) {
    cout << "Adding Enemy" << endl;

    cout << "Enter enemy ID: ";
    cin >> enemies[count].id;

    cout << "Enter Enemy Health: ";
    cin >> enemies[count].health;
}

void damageEnemy(Enemy enemies[], int &count) {

}

void showEnemies(Enemy enemies[], int count) {
    for(int i=0; i<count; i++){
        cout << "Enemy id: "<<enemies[i].id << endl;
        cout << "Enemy health: " << enemies[i].health << endl;
    }
}

int main() {
    Enemy enemies[5];
    int count = 0;
    int choice;
    bool isRunning = true;

    while (isRunning) {
        cout << "\n--- Enemy System ---" << endl;
        cout << "1. Add Enemy" << endl;
        cout << "2. Damage Enemy" << endl;
        cout << "3. Show Enemies" << endl;
        cout << "4. Exit" << endl;

        cin >> choice;

        switch (choice) {
            case 1:
                addEnemy(enemies, count);
                count++;
                break;
            case 2:
                damageEnemy(enemies, count);
                break;
            case 3:
                showEnemies(enemies, count);
                break;
            case 4:
                isRunning = false;
                break;
        }
    }

    return 0;
}
