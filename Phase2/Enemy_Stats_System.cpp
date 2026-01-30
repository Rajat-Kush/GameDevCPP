#include <iostream>
using namespace std;

struct Enemy {
    int id;
    int health;
};

void addEnemy(Enemy enemies[], int &count) {
    if(count >= 5) {
        cout << "Enemy is full";
    }
    else{
        cout << "Adding Enemy" << endl;

        cout << "Enter enemy ID: ";
        cin >> enemies[count].id;
        enemies[count].health = 100;  
        count++;
    }
}

void damageEnemy(Enemy enemies[], int &count, int dmg) {
    if(count == 0){
        cout << "No enemies to damage" << endl;
        return;
    }

    int keyenemy;
    cout << "Enter the Enemy ID you want to damage: ";
    cin >> keyenemy;

    for(int i=0; i<count; i++){
        if(keyenemy == enemies[i].id){
            if(enemies[i].health - dmg <= 0){
                cout << "Enemy Died";
                for(int j=i; j<count-1; j++){
                    enemies[j] = enemies[j+1];
                }
                count--;
            }
            else{
                enemies[i].health -= dmg;
            }
            break;
        }
    }
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
                break;
            case 2:
                int dmg;
                cout << "Enter damage value: ";
                cin >> dmg;
                damageEnemy(enemies, count, dmg);
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
