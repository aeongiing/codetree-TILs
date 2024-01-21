#include <iostream>
using namespace std;

int main() {
    double arr[8];
    double sum=0;
    for(int i=0; i<8; i++){
        cin >> arr[i];
        sum+=arr[i];
    }
    cout.precision(1);
    cout << fixed << sum/8;

    return 0;
}