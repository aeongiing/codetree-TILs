#include <iostream>
using namespace std;

bool IsPart(int n1, int n2, int a[], int b[]){
    for(int i=0; i<n1; i++){
        if(a[i]==b[0]){
            for(int j=1; j<n2; j++){
                if(a[i+j]!=b[j]){
                    return false;
                }
            }
            return true;
        }
    }
}

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
    if(IsPart(n1, n2, &a[0], &b[0])){
        cout << "Yes";
    }
    else{
        cout << "No";
    }
    return 0;
}