#include <iostream>
using namespace std;

int main() {
    int arr[2][4];
    int row_sum[2]={};
    int col_sum[4]={};
    int sum=0;

    for(int i=0; i<2; i++){
        for(int j=0; j<4; j++){
            cin >> arr[i][j];
            row_sum[i]+=arr[i][j];
            col_sum[j]+=arr[i][j];
            sum+=arr[i][j];
        }
    }
    cout.precision(1);
    for(int i=0; i<2; i++){
        cout << fixed << (double)row_sum[i]/4 << " ";
    }
    cout << endl;
    for(int i=0; i<4; i++){
        cout << fixed << (double)col_sum[i]/2 << " ";
    }
    cout << endl;
    cout << fixed << (double)sum/8;
    return 0;
}