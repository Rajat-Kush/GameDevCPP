#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n;
    int count = 0; 
    int rev = 0;

    cout <<"Enter n: ";
    cin >> n;
    int y = n;
    int b = n;

    while(n != 0) {
        n = n / 10;
        count++;
    }

    while(y != 0) {
        int rem = y % 10;
        rev = rev * 10 + rem;
        y = y / 10;
        count--;
    }


    if (rev == b){
        cout << "Palindrome";
    }
    else {
        cout << "Not Palindrome";
    }

    return 0;
}