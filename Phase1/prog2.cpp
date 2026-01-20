#include <iostream>
using namespace std;

int main() {
    int n;
    int sum = 0;

    cout << "Enter n: ";
    cin >>n;

    while(n != 0) {
        sum = sum + n;
        n--;
    }

    cout << sum;

    return 0;
}