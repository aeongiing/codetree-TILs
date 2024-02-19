#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int array[101]={};
    for(int i=0; i<n; i++){
        int x1, x2;
        cin >> x1 >> x2;
        for(int j=x1; j<=x2; j++){
            array[j]++;
        }
    }
    int max=0;
    for(int i=0; i<101; i++){
        if(array[i]>max){
            max=array[i];
        }
    }
    cout << max;
    return 0;
}