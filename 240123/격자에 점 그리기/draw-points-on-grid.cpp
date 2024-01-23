#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    
    int arr[n][n]={};
    int cnt=0;
    while(m--){
        
        int r, c;
        cin >> r >> c;
        cnt++;
        arr[r-1][c-1]=cnt;
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}