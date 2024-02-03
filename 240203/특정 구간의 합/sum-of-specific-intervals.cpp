#include <iostream>
using namespace std;

int n;
const int MAX_SIZE = 1000;
int a[MAX_SIZE];

int Sum(int a1, int a2){
    int s=0;
    for(int i=a1-1; i<=a2-1; i++){
        s+=a[i];
    }
    return s;
}

int main() {
    int m;
    cin >> n >> m;
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    while(m--){
        int a1, a2;
        cin >> a1 >> a2;
        cout << Sum(a1, a2) << endl;
    }
    return 0;
}