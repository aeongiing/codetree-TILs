#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int array[n]={};
    int a, b;
    for(int i=0; i<k; i++){
        cin >> a >> b;
        for(int j=a-1; j<b; j++){
            array[j]++;
        }
    }
    int max=0;
    for(int i=0; i<n; i++){
        if(array[i]>max){
            max=array[i];
        }
    }
    cout << max;
    return 0;
}