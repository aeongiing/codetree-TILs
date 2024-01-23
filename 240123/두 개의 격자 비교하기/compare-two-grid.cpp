#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int a1[n][m];
    int a2[n][m];
    int same[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> a1[i][j];
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> a2[i][j];
            if(a2[i][j]==a1[i][j]){
                same[i][j]=0;
            }
            else{
                same[i][j]=1;
            }
            cout << same[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}