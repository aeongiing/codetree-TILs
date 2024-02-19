#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int array[200]={};
    int x1, x2;
    for(int i=0; i<n; i++){
        cin >> x1 >> x2;
        array[x1+100]++;
        array[x2+100]++;
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