#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    bool tf=false;
    for(int i=a; i<=b; i++){
        if(1920%i==0 && 2880%i==0){
            tf=true;
        }
    }
    if(tf==true){
        cout << 1;
    }
    else{
        cout << 0;
    }
    return 0;
}