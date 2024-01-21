#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int num=0;
    for(int i=0; i<n; i++){
        int arr[4];
        int sum=0;
        for(int j=0; j<4; j++){
            cin >> arr[j];
            sum+=arr[j];
        }
        if(sum/4 >=60){
            cout << "pass" << endl;
            num++;
        }
        else{
            cout << "fail" << endl;
        }
    }
    cout << num;
    return 0;
}