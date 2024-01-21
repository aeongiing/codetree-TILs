#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    int arr2[n];
    int num=0;
    for(int i=0; i<n; i++){
        cin >> arr[i];
        if(arr[i]%2==0){
            arr2[num]=arr[i];
            num++;
        }
    }
    for(int i=0; i<num; i++){
        cout << arr2[i] << " ";
    }
    return 0;
}