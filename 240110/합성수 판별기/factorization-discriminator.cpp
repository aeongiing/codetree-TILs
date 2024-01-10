#include <iostream>
using namespace std;

int main() {
    int n;
    bool tf=false;
    cin >> n;
    for(int i=2; i<n; i++){
        if(n%i==0){
            tf=true;
        }
    }
    if(tf==true){
        cout << "C";
    }
    else{
        cout << "N";
    }
    return 0;
}