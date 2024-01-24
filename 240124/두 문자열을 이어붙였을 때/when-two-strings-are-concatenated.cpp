#include <iostream>
#include <string>
using namespace std;

int main() {
    string A, B;
    string A_plus_B, B_plus_A;
    cin >> A >> B;
    A_plus_B=A+B;
    B_plus_A=B+A;
    bool result = true;
    for(int i=0; i<A_plus_B.length(); i++){
        if(A_plus_B[i]!=B_plus_A[i])
            result=false;
    }
    if(result==true){
        cout << "true";
    }
    else{
        cout << "false";
    }
    return 0;
}