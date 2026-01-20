#include <iostream>
using namespace std;

int main() {
    int ar[] = {3, 5, 8, 2, 3};
    int j = 4;

    for(int i=0; i<5/2; i++){
        swap(ar[i], ar[j]);
        j--;
    }

    for(int i=0; i<5; i++){
        cout << ar[i];
    }

    return 0;
}