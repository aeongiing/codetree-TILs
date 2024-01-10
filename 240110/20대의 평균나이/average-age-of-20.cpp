#include <iostream>
using namespace std;

int main() {
    int sum=0, cnt=0;
    while(1){
        int a;
        cin >> a;
        if(a<20 || a>29){
            break;
        }
        sum+=a;
        cnt++;
    }
    cout.precision(2);
    cout<<fixed<<(double)sum/cnt;
    return 0;
}