#include <iostream>
using namespace std;

struct Player {
    int health;
};

void takeDamage(Player *p, int dmg){
    if(p->health - dmg < 0){
        p->health = 0;
    }
    else
    {
        p->health = p->health - dmg;
    }
}

void healPlayer(Player *p, int heal) {
    if(p->health + heal > 100){
        p->health = 100;
    }
    else
    {
        p->health = p->health + heal;
    }
}

void showHealth(Player *p) {
    cout << p->health << endl;
}

int main(){
    Player player;
    player.health = 100;

    takeDamage(&player, 10);
    showHealth(&player);

    healPlayer(&player , 5);
    showHealth(&player);

    return 0;
}