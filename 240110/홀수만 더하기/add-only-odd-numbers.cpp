#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a, sum=0;
    for(int i=0; i<n; i++){
        cin >> a;
        if(a%2!=0 && a%3==0){
            sum+=a;
        }
    }
    cout << sum;
    return 0;
}