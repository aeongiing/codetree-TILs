#include <iostream>
using namespace std;

int main() {
    int x1[2], y1[2];
    int x2[2], y2[2];
    int arr[2001][2001];

    for(int i=0; i<2; i++){
        cin >> x1[i] >> y1[i] >> x2[i] >> y2[i];

        x1[i]+=1000;
        y1[i]+=1000;
        x2[i]+=1000;
        y2[i]+=1000;
    }
    for(int i=0; i<2; i++){
        for(int x=x1[i]; x<x2[i]; x++){
            for(int y=y1[i]; y<y2[i]; y++){
                arr[x][y]=i+1;
            }
        }
    }

    int minX=2000, maxX=0, minY=2000, maxY=0;
    bool exist=false;
    for(int x=0; x<=2000; x++){
        for(int y=0; y<=2000; y++){
            if(arr[x][y]==1){
                exist=true;
                minX=min(minX, x);
                maxX=max(maxX, x);
                minY=min(minY, y);
                maxY=max(maxY, y);
            }
        }
    }

    int size;
    if(!exist){
        size=0;
    }
    else{
        size=(maxX-minX+1)*(maxY-minY+1);
    }
    cout << size;


    return 0;
}