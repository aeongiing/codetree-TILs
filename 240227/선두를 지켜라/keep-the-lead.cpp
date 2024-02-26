#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int a[2000001]={};
    int b[2000001]={};
    int v, t;
    int total=0;
    int current_a=0;
    for(int i=0; i<n; i++){
        cin >> v >> t;
        for(int j=1; j<=t; j++){
            a[current_a+j]=a[current_a+j-1]+v;
        }
        current_a+=t;
        total+=t;
    }
    int current_b=0;
    for(int i=0; i<m; i++){
        cin >> v >> t;
        for(int j=1; j<=t; j++){
            b[current_b+j]=b[current_b+j-1]+v;
        }
        current_b+=t;
    }

    int cnt=0;
    for(int i=2; i<=total; i++){
        if(a[i-1]>=b[i-1] && a[i]<b[i]){
            cnt++;
        }
        else if(a[i-1]<=b[i-1] && a[i]>b[i]){
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}