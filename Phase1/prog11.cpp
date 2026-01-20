#include <iostream>
using namespace std;

int main(){
    int ar[] = {3, 5, 8, 9};
    int n = 4;
    int sum = 0;

    for(int i=0; i<n; i++){
        sum += *(ar + i);
    }

    cout << sum;

    return 0;
}