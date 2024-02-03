#include <iostream>
using namespace std;

void gcd(int n, int m){
    int max=1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            if(n%i==0 && m%j==0 && i==j){
                if(j>=max){
                    max=j;
                }
                
            }
        }
        
    }
    cout << max;
}

int main() {
    int n, m;
    cin >> n >> m;
    gcd(n, m);
    return 0;
}