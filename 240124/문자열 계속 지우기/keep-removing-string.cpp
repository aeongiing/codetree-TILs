#include <iostream>
#include <string>
using namespace std;

int main() {
    string A, B;
    cin >> A >> B;
    int start_index=A.find(B);
    while(A.find(B)!=string::npos){
        A.erase(start_index, start_index+B.length());
        
    }
    cout << A << endl;
    

    return 0;
}