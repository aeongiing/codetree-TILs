#include <iostream>
using namespace std;

int main() {
    int arr[100];
    int count_arr[10]={};
    for(int i=0; i<100; i++){
        cin >> arr[i];
        if(arr[i]==0){
            break;
        }
        count_arr[arr[i]/10]++;
    }
    for(int i=1; i<10; i++){
        cout << i << " - " << count_arr[i] << endl;
    }
    return 0;
}