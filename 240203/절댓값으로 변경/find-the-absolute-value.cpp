#include <iostream>
using namespace std;

void OnlyPlus(int n, int *arr){
    for(int i=0; i<n; i++){
        if(*(arr+i)<0){
            *(arr+i) = -(*(arr+i));
        }
    }
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    OnlyPlus(n, arr);
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}