#include <iostream>
using namespace std;

int main() {
    int arr[2001][2001]={};
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    x1+=1000;
    y1+=1000;
    x2+=1000;
    y2+=1000;
    for(int j=x1; j<x2; j++){
        for(int k=y1; k<y2; k++){
            arr[j][k]=1;
        }
    }
    cin >> x1 >> y1 >> x2 >> y2;
    x1+=1000;
    y1+=1000;
    x2+=1000;
    y2+=1000;
    for(int j=x1; j<x2; j++){
        for(int k=y1; k<y2; k++){
            arr[j][k]=0;
        }
    }
    int x_min, y_min, x_max, y_max;
    int j=0;
    for(int i=0; i<2001; i++){
        if(arr[i][j]==1){
            x_min=i;
            y_min=j;
            break;
        }
        j++;
    }
    j=2000;
    for(int i=2000; i>=0; i--){ 
        if(arr[i][j]==1){
            x_max=i;
            y_max=j;
            break;
        }
        j--;
    }
    cout << (x2-x1)*(y2-y1-1);
    return 0;
}