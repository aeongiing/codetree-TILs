#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int arr[m][n]={};
    int num=0;
    for(int i=0; i<m; i++){
        if(i%2==0){
            for(int j=0; j<n; j++){
                arr[i][j]=num;
                num++;
            }
        }
        else{
            for(int j=n-1; j>=0; j--){
                arr[i][j]=num;
                num++;
            }
        }
        
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout << arr[j][i] << " ";
        }
        cout << endl;
    }
    return 0;
}