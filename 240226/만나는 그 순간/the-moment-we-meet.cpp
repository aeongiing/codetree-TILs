#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int a[2000001]={};
    int b[2000001]={};
    char c;
    int d;
    int total=0;
    int current_a=0;
    for(int i=0; i<n; i++){
        cin >> c >> d;
        if(c=='R'){
            for(int j=1; j<=d; j++){
                a[current_a+j]=a[current_a+j-1]+1;
            }           
        }
        else if(c=='L'){
            for(int j=1; j<=d; j++){
                a[current_a+j]=a[current_a+j-1]-1;
            }
        }
        current_a+=d;
        total+=d;
    }

    int current_b=0;
    for(int i=0; i<m; i++){
        cin >> c >> d;
        if(c=='R'){
            for(int j=1; j<=d; j++){
                b[current_b+j]=b[current_b+j-1]+1;
            }           
        }
        else if(c=='L'){
            for(int j=1; j<=d; j++){
                b[current_b+j]=b[current_b+j-1]-1;
            }
        }
        current_b+=d;
    }

    for(int i=1; i<200001; i++){
        if(a[i]==b[i]){
            cout << i;
            break;
        }
        if(i==total){
            cout << -1;
            break;
        }
    }


    
    return 0;
}