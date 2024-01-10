#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    bool tf=true;
    for(int i=2; i<n; i++){
        if(n%i==0){
            tf=false;
        }
    }
    if(tf==true){
        cout << "P";
    }
    else 
        cout << "C";
    return 0;
}