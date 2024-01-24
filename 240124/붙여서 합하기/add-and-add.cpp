#include <iostream>
#include <string>
using namespace std;
//int a_int = stoi(a);
int main() {
    string A, B;
    string A_plus_B, B_plus_A;
    cin >> A >> B;
    A_plus_B=A+B;
    B_plus_A=B+A;
    cout << stoi(A_plus_B)+stoi(B_plus_A);
    return 0;
}