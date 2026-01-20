#include <iostream>
using namespace std;

int main(){
    int ar[] = {3, 5, 8, 9};
    int n = 4;

    for(int i=0; i<n-1; i++){
        if(ar[i] > ar[i+1]){
            cout << "Unsorted";
            return 0;
        }
    }

    cout << "Sorted";
    return 0;
}