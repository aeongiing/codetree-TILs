#include <iostream>
using namespace std;

int main() {
    int arr[10];
    int sum_odd=0;
    int sum_even=0;

    for(int i=0; i<10; i++){
        cin >> arr[i];
        if((i+1)%2!=0){
            sum_odd+=arr[i];
        }
        else{
            sum_even+=arr[i];
        }
    }
    if(sum_even>=sum_odd){
        cout << sum_even-sum_odd;
    }
    else{
        cout << sum_odd-sum_even;
    }
    return 0;
}