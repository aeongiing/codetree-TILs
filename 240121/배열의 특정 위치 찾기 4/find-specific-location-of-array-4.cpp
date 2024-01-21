#include <iostream>
using namespace std;

int main() {
    int arr[10];
    int num=0;
    int sum=0;
    for(int i=0; i<10; i++){
        cin >> arr[i];
        if(arr[i]==0){
            for(int j=0; j<i; j++){
                if(arr[j]%2==0){
                    num++;
                    sum+=arr[j];
                }
            }
        }
    }
    cout << num << " " << sum;
    return 0;
}