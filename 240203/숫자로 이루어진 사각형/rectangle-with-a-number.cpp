#include <iostream>
using namespace std;

void PrintRect(int n){
    for(int i=0; i<n; i++){
        for(int j=1; j<=n; j++){
            int k=n*i+j;
            if(k>=10){
                k=k%10+1;
            }
            cout << k << " ";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cin >> n;
    PrintRect(n);
    return 0;
}