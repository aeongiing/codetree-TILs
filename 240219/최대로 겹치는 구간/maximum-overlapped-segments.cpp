#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int array[200]={};
    int x1, x2;
    for(int i=0; i<n; i++){
        cin >> x1 >> x2;
        for(int j=x1+100; j<x2+100; j++){
            array[j]++;
        }
    }
    int max=0;
    for(int i=0; i<200; i++){
        if(array[i]>max){
            max=array[i];
        }
    }
    cout << max;
    return 0;
}