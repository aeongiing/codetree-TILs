#include <iostream>
#include <string>
using namespace std;

int main() {
    string A, B;
    cin >> A >> B;
    int cnt=-1;
    for(int i=0; i<100; i++){
        A=A.substr(A.length()-1, 1)+A.substr(0, A.length()-1);
        if(A==B){
            cnt=i+1;
            break;
        }
    }
    cout << cnt;
    return 0;
}