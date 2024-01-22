#include <iostream>
using namespace std;

int main() {
    int arr[10];
    int max=0;
    int min=1000;
    for(int i=0; i<10; i++){
        cin >> arr[i];
        if(arr[i]<500){
            if(arr[i]>=max){
                max=arr[i];
            }
        }
        else if(arr[i]>500){
            if(arr[i]<=min){
                min=arr[i];
            }
        }
    }
    cout << max << " " << min;
    return 0;
}