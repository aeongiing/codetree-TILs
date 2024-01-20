#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        if(i%2==0){
            for(int j=i*n+1; j<i*n+n+1; j++){
                cout << j << " ";
            }
            cout << endl;
        }
        else{
            for(int j=(i+1)*n; j>(i+1)*n-n; j--){
                cout << j << " ";
            }
            cout << endl;
        }
    }
    return 0;
}