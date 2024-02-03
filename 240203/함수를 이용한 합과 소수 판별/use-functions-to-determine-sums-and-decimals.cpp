#include <iostream>
using namespace std;

bool IsPrime(int n){
    for(int j=2; j<n; j++){
        if(n%j==0){
            return false;
        }
    }
    return true;
}
bool SumEven(int n){
    int sum=n/100+n/10+n%10;
    if(sum%2==0){
        return true;
    }
    else{
        return false;
    }
}

int main() {
    int a, b;
    cin >> a >> b;
    int cnt=0;
    for(int i=a; i<=b; i++){
        if(IsPrime(i) && SumEven(i) && b!=1){
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}