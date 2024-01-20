#include <iostream>
using namespace std;

int main() {
    int start, end;
    cin >> start >> end;
    int cnt=0;
    for(int i=start; i<=end; i++){
        int num=0;
        for(int j=1; j<i; j++){
            if(i%j==0){
                num+=j;
            }
        }
        if(num==i){
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}