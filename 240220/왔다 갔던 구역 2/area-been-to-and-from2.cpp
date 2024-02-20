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
            x+=1000;
            for(int j=cur_index; j<x; j++){
                array[j]++;
                //cout << j << " ";
            }
            //cout << endl;
            cur_index+=x-1000;
        }
        else if(dir=='L'){
            x=1000-x;
            for(int j=cur_index; j>x; j--){
                array[j]++;
                //cout << j << " ";
            }
            //cout << endl;
            cur_index-=1000-x;
        }

    }
    int cnt=0;
    for(int i=0; i<2001; i++){
        if(array[i]>=2){
            cnt++;
        }
    }
    cout << cnt/2;
    return 0;
}