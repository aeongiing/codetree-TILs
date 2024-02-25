#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int arr[2001][2001]={};
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    for(int i=x1+1000; i<=x2+1000; i++){
        for(int j=y1+1000; j<=y2+1000; j++){
            arr[i][j]=1;
        }
    }
    cin >> x1 >> y1 >> x2 >> y2;
    for(int i=x1+1000; i<x2+1000; i++){
        for(int j=y1+1000; j<y2+1000; j++){
            arr[i][j]=0;
        }
    }
    for(int i=0; i<2001; i++){
        for(int j=0; j<2001; j++){
            if(arr[i][j]==1){
                x1=i;
                y1=j;
                goto point;
            }
        }
    }
    point:
    for(int i=2000; i>=0; i--){
        for(int j=2000; j>=0; j--){
            if(arr[i][j]==1){
                x2=i;
                y2=j;
                goto point2;
            }
        }
    }
    point2:
    int x3=2000, y3=2000;
    for(int i=0; i<2001; i++){
        for(int j=0; j<2001; j++){
            if(arr[i][j]==1){
                x1=min(x1,i);
                y1=min(y1,j);
                x3=max(x3,i);
                y3=max(y3,j);
            }
        }
    }
    cout << (x3-x1)*(y3-y1);

    return 0;
}