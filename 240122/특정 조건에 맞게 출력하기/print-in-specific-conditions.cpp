#include <iostream>
using namespace std;

int main() {
    int arr[100];
    int cnt=0;
    for(int i=0; i<100; i++){
        cin >> arr[i];
        
        if(arr[i]==0){
            break;
        }
        cnt++;
    }
    for(int j=0; j<cnt; j++){
        if(arr[j]%2!=0){
            arr[j]+=3;
            cout << arr[j] << " ";
        }
        else{
            arr[j]/=2;
            cout << arr[j] << " ";
        }
    }
    return 0;
}