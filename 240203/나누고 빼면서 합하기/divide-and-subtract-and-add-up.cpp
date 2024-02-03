#include <iostream>
using namespace std;

int PlusMinus(int m, int *a){
    int sum=0;
    while(m != 1){
        sum += *(a+m-1);
        if(m%2 != 0){
            m--;
        }
        else{
            m/=2;
        }
    }
    return sum+(*a);
}

int main() {
    int n, m;
    int a[n];
    cin >> n >> m;
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    cout << PlusMinus(m, a);
    return 0;
}