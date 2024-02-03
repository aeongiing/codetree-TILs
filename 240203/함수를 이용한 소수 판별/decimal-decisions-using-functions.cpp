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
        if(b==1){
        cout << 1;
        }
        else if(IsPrime(i)){
            sum+=i;
        }
    }
    cout << sum;
    return 0;
}