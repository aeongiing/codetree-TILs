#include <iostream>
using namespace std;

int main() {
    int start, end;
    cin >> start >> end;
    int cnt=0;
    for(int i=start; i<=end; i++){
        int num=0;
        for(int j=1; j<=i; j++){
            if(i%j==0){
                num++;
            }
        }
        if(num==3){
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}