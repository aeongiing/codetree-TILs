#include <iostream>
using namespace std;

void lcm(int n, int m){
    int min=n*m;
    for(int i=1; i<=n*m; i++){
        if(i%n==0 && i%m==0){
            min=i;
            cout << i;
            break;
        }
    }
}

int main() {
    int n, m;
    cin >> n >> m;
    lcm(n, m);
    return 0;
}