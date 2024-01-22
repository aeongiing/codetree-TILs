#include <iostream>
#include <climits>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    int max1=INT_MIN;
    for(int i=0; i<n; i++){
        cin >> arr[i];
        if(arr[i]>=max1){
            max1=arr[i];
        }
    }
    for(int i=0; i<n; i++){
        if(arr[i]==max1){
            arr[i]=INT_MIN;
            break;
        }
    }
    int max2=INT_MIN;
    for(int i=0; i<n-1; i++){
        if(arr[i]>=max2){
            max2=arr[i];
        }
    }
    cout << max1 << " " << max2;
    


    return 0;
}