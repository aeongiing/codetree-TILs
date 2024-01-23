#include <iostream>
using namespace std;

int main(){
    int num;
    int max=-1;
    int save;
    int Arr[1000];
    cin>>num;
    for(int i=0;i<num;i++){
        cin>>Arr[i];
    }
    for(int i=0;i<num;i++){
        if(Arr[i]>max){
            max=Arr[i];
            save=i+1;
        }
    }
    cout<<save<<" ";
    max=-1;
    while(save!=1){
        for(int i=0;i<save-1;i++){
        if(Arr[i]>max){
            max=Arr[i];
            save=i+1;
        }
        cout<<save<<" ";
    }
    }
    return 0;
}