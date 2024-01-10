#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    bool tf=false;
    for(int i=a; i<=b; i++){
        if(i%c==0){
            tf=true;
        }
    }
    if(tf==true){
        cout << "NO";
    }
    else
        cout << "YES";
    return 0;
}