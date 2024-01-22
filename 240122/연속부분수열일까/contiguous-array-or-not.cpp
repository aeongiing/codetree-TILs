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
    int c[n2]={};
    int idx=0;
    for(int i=0; i<n1; i++){
        if(a[i]==b[0]){
            for(int j=0; j<n2; j++){
                c[j]=a[i+j];
                if(b[j]==c[j]){
                    idx++;
                }
                else{
                    idx=0;
                    break;
                }
                if(idx==n2){
                    break;
                }
            }
        }
    }
    cout << idx << endl;
    if(idx==n2){
        cout << "Yes";
    }
    else{
        cout << "No";
    }


    return 0;
}