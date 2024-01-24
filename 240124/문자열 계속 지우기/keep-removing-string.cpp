#include <iostream>
#include <string>
using namespace std;

int main() {
    string A, B;
    cin >> A >> B;
    
    while(A.find(B)!=string::npos){
        int start_index=A.find(B);
        A.erase(start_index, B.length());
    }
    cout << A << endl;
    

    return 0;
}