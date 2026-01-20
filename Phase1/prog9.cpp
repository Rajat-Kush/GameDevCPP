#include <iostream>
using namespace std;

int main(){
    int ar[] = {3, 5, 8, 9};
    int n = 4;
    int key = 5;

    for(int i=0; i<n; i++){
        if(ar[i] == key){
            cout << "Found at " << i << endl;
            break;
        }
    }

    return 0;
}