#include <iostream>
using namespace std;

int main() {
    int arr[10];
    int b;
    cin >> arr[0] >> b;
    int count_arr[b]={};
    for(int i=1; i<10; i++){
        arr[i]=arr[i-1]/b;
        if(arr[i-1]<=1){
            break;
        }
        count_arr[arr[i-1]%b]++;
    }
    int sum=0;
    for(int i=0; i<b; i++){
        sum+=count_arr[i]*count_arr[i];
    }
    cout << sum;
    return 0;
}