#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[201][201];

    for(int i=0; i<n; i++){
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        if(i%2==0){
            for(int j=x1+100; j<x2+100; j++){
                for(int k=y1+100; k<y2+100; k++){
                    arr[j][k]=1;
                }
            }
        }
        else{
            for(int j=x1+100; j<x2+100; j++){
                for(int k=y1+100; k<y2+100; k++){
                    arr[j][k]=2;
                }
            }
        }
    }
    
    int cnt=0;
    for(int i=0; i<201; i++){
        for(int j=0; j<201; j++){
            if(arr[i][j]==2){
                cnt++;
            }
        }
    }
    cout << cnt;
    return 0;
}