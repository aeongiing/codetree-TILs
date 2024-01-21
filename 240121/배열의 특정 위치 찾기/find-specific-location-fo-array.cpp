#include <iostream>
using namespace std;

int main() {
    int arr[10];
    int sum2=0;
    int sum3=0;
    for(int i=0; i<10; i++){
        cin >> arr[i];
        if((i+1)%2==0){
            sum2+=arr[i];
        }
        if((i+1)%3==0){
            sum3+=arr[i];
        }
    }
    cout.precision(1);
    cout << sum2 << " " << fixed << (double)sum3/3;
    return 0;
}