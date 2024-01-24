#include <iostream>
#include <string>
using namespace std;

int main() {
    string A, q;
    cin >> A >> q;
    for(int i=0; i<q.length(); i++){
        if(q[i]=='L'){
            A=A.substr(1, A.length()-1)+A.substr(0, 1);
        }
        else if(q[i]=='R'){
            A=A.substr(A.length()-1, 1)+A.substr(0, A.length()-1);
        }
    }
    cout << A;
    
    return 0;
}