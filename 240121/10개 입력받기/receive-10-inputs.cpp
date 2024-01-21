#include <iostream>
using namespace std;

int main() {
    int arr[10];
    int sum=0;
    int num;

    for(int i=0; i<10; i++){
        cin >> arr[i];
        if(arr[i]!=0){
            sum+=arr[i];
            num=i+1;
        }
        else{
            double avg=(double)sum/num;
            cout.precision(1);
            cout << sum << " " << fixed << avg;
        }
    }
    return 0;
}