#include <iostream>
#include <climits>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    int min=INT_MAX;
    int idx;
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int minus[n-1];
    for(int i=0; i<n; i++){
        int max=0;
        for(int j=i; j<n; j++){
            if(arr[j]>=max){
                max=arr[j];
            }
        }
        minus[i]=max-arr[i];

    }
    int maximum=0;
    for(int i=0; i<n-1; i++){
        if(minus[i]>maximum){
            maximum=minus[i];
        }
    }
    if(maximum<=0){
        cout << 0;
    }
    else{
        cout << maximum;
    }



    return 0;
}