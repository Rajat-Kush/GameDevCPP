#include <iostream>
using namespace std;

void swapper(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int x = 5;
    int y = 10;

    swapper(&x, &y);

    cout << "x " << x << endl;
    cout << "y " << y;

    return 0;
} 