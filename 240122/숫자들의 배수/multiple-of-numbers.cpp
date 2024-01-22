#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[50];
    int cnt=0;
    for(int i=1; i<=50; i++){
        cout << n*i << " ";
        if((n*i)%5==0){
            cnt++;
            if(cnt==2){
                break;
            }
        }
    }
    return 0;
}