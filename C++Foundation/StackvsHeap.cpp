#include <iostream>
using namespace std;

class Entity {
public:
    Entity() {
        cout << "This is inside constructor" << endl;
    }

    ~Entity() {
        cout << "This is inside destructor" << endl;
    }
};

int main() {
    //Stack
    Entity a;

    //Haep
    Entity* b = new Entity();

    delete b;
    b = nullptr;

    return 0;
}
