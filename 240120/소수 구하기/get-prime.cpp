#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for(int i=1; i<=n; i++){
        int num=0;
        for(int j=1; j<=i; j++){
            if(i%j==0){
                num++;
            }
        }
        if(num==2){
            cout << i << " ";
        }
    }
    return 0;
}