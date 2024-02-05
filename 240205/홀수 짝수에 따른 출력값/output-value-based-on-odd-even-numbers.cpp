#include <iostream>
using namespace std;

int F(int n){
    if(n%2!=0){
        if(n==1){
            return 1;
        }
        return n+F(n-2);
    }
    else{
        if(n==2){
            return 2;
        }
        return n+F(n-2);
    }
}

int main() {
    int n;
    cin >> n;
    cout << F(n);
    return 0;
}