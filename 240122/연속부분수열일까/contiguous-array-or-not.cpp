#include <iostream>
using namespace std;

int main() {
    int n1, n2;
    cin >> n1 >> n2;
    int a[n1];
    int b[n2];
    for(int i=0; i<n1; i++){
        cin >> a[i];
    }
    for(int i=0; i<n2; i++){
        cin >> b[i];
    }
    int i;
    int cnt=0;
    for(i=0; i<n1; i++){
        if(a[i]==b[0]){
            cnt=1;
            break;
        }
    }
    for(int j=1; j<n2; j++){
        while(a[i+j]==b[j]){
            cnt++;
        }
    }
    if(cnt==n2){
        cout << "Yes";
    }
    else{
        cout << "No";
    }
    return 0;
}