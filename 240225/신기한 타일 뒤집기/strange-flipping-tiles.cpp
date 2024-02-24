#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int x;
    char dir;

    int array[201]={};
    int white_arr[201]={};
    int black_arr[201]={};

    int cur_index=100;

    for(int i=0; i<n; i++){
        cin >> x >> dir;
        if(dir=='R'){
            x=x+cur_index-1;
            for(int j=cur_index; j<=x; j++){
                array[j]=1;
            }
            cur_index=x;
        }
        else if(dir=='L'){
            x=cur_index-x+1;
            for(int j=cur_index; j>=x; j--){
                array[j]=2;
            }
            cur_index=x;
        }

    }
    int cnt_white=0;
    int cnt_black=0;
    int cnt_gray=0;

    for(int i=0; i<201; i++){
        if(array[i]==2){
            cnt_white++;
        }
        else if(array[i]==1){
            cnt_black++;
        }
    }
    cout << cnt_white << " " << cnt_black;
    return 0;
    return 0;
}