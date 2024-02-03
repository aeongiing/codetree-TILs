#include <iostream>
using namespace std;

bool IsPrime(int i){
    for(int j=2; j<i; j++){
        if(i%j==0){
            return false;
        }
    }
    return true;
}

int main() {
    int a, b;
    cin >> a >> b;
    int sum=0;
    
    for(int i=a; i<=b; i++){
        if(IsPrime(i) && b!=1){
            sum+=i;
        }
    }
    cout << sum;
    return 0;
}