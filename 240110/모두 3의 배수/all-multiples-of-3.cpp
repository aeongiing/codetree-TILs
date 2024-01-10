#include <iostream>
using namespace std;

int main() {
    int n;
    bool tf=true;
    for(int i=0; i<5; i++){
        cin >> n;
        if(n%3!=0){
            tf=false;
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