#include <iostream>
using namespace std;

int main(){
    int ar[] = {3, 5, 6, 3, 2, 5, 5, 9};
    int n = 8;

    for(int i=0; i<n; i++) {
        int j;
        int count = 0;

        for(j=0; j<n; j++) {
            if(ar[j] == -1) continue;

            if(ar[j] == ar[i]){
                count++;
                if(j != i){
                    ar[j] = -1;
                }
            }
        }

        if(ar[i] != -1) {
            cout << ar[i] << " -> " << count << endl;
        }
        
        ar[i] = -1;
        
    }
    return 0;
}