#include <iostream>
using namespace std;

int main() {
    int arr[10];
    int sum=0;
    int num;

    for(int i=0; i<10; i++){
        cin >> arr[i];
        cout.precision(1);
        if(arr[i]!=0){
            sum+=arr[i];
            num=i+1;
        }
        else{
            double avg=(double)sum/num;
            cout << sum << " " << fixed << avg;
            break;
        }
        if(i==9){
            double avg=(double)sum/num;
            cout << sum << " " << fixed << avg;
        }
        
    }
    return 0;
}