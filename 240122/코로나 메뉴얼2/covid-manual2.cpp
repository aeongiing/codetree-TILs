#include <iostream>
using namespace std;

int main() {
    int cnt[4]={};
    for(int i=0; i<3; i++){
        char c[3];
        int arr[3];
        cin >> c[i] >> arr[i];
        if(c[i]=='Y' && arr[i]>=37){
            cnt[0]++;
        }
        else if(c[i]=='N' && arr[i]>=37){
            cnt[1]++;
        }
        else if(c[i]=='Y' && arr[i]<37){
            cnt[2]++;
        }
        else{
            cnt[3]++;
        }
    }
    for(int i=0; i<4; i++){
        cout << cnt[i] << " ";
    }
    if(cnt[0]>=2){
        cout << "E";
    }
    return 0;
}