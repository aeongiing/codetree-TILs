#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int x;
    char dir;

    int array[2001]={};
    int cur_index=1000;
    for(int i=0; i<n; i++){
        cin >> x >> dir;
        if(dir=='R'){
            x+=cur_index;
            for(int j=cur_index; j<x; j++){
                array[j]++;
            }
            cur_index=x;
        }
        else if(dir=='L'){
            x=cur_index-x;
            for(int j=cur_index-1; j>=x; j--){
                array[j]++;
            }
            cur_index=x;
        }

    }
    int cnt=0;
    for(int i=0; i<2001; i++){
        if(array[i]>=2){
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}