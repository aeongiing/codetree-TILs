#include <iostream>
using namespace std;

void DivisionOnlyEven(int n, int *arr){
    for(int i=0; i<n; i++){
        if(*(arr+i)%2==0){
            *(arr+i)/=2;
        }
        cout << *(arr+i) << " ";
    }
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    DivisionOnlyEven(n, arr);
    return 0;
}