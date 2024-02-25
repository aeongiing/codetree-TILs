#include <iostream>
using namespace std;

int main() {
    int arr[2001][2001]={};
    int x1, y1, x2, y2;
    for(int i=0; i<2; i++){
        cin >> x1 >> y1 >> x2 >> y2;
        x1+=1000;
        y1+=1000;
        x2+=1000;
        y2+=1000;
        for(int j=x1; j<x2; j++){
            for(int k=y1; k<y2; k++){
                if(arr[j][k]==0){
                    arr[j][k]=1;
                }
                    
            }
        }
    }
    cin >> x1 >> y1 >> x2 >> y2;
    x1+=1000;
    y1+=1000;
    x2+=1000;
    y2+=1000;

    for(int i=x1; i<x2; i++){
        for(int j=y1; j<y2; j++){
            arr[i][j]=0;
        }
    }
    int size=0;
    for(int i=0; i<2001; i++){
        for(int j=0; j<2001; j++){
            if(arr[i][j]==1){
                size++;
            }
        }
    }
    cout << size;
    return 0;
}