#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    if(a>=b){//a가 가장 크고
        int temp=a;
        if(a>=c){//
            c=temp;
            a=c;
        }
        else{
            b=temp;
            a=b;
        }
    }
    else if(b>=c){
        if(a>=c){
            int temp=a;
            c=temp;
            a=c;
        }
        else{
            int temp=b;
            c=temp;
            c=b;
        }
    }
    cout << b;
    return 0;
}