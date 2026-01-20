#include <iostream>
using namespace std;

int main() {
    int ar[] = {3, 5, 8, 2, 3};
    int min = ar[0];
    int max = ar[0];

    for(int i=0; i<5; i++){
        if(min > ar[i]){
            min = ar[i];
        }
    }

    cout << min << endl;

    for(int i=0; i<5; i++){
        if(max < ar[i]){
            max = ar[i];
        }
    }

    cout << max << endl;

    return 0;
}