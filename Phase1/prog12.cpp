#include <iostream>
using namespace std;

int main(){
    int ar[] = {3, 5, 8, 9};
    int n = 4;
    int j = n-1;

    for(int i=0; i<n/2; i++){
        swap(*(ar + i), *(ar + j));
        j--;
    }

    for(int i=0; i<n ; i++) {
        cout << ar[i] << " ";
    }

    return 0;
}