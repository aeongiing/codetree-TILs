#include <iostream>
using namespace std;

int main() {
    int a_t, b_t, c_t;
    char a_s, b_s, c_s;
    cin >> a_s >> a_t;
    cin >> b_s >> b_t;
    cin >> c_s >> c_t;
    int A=0;

    if(a_t>=37 && a_s=='Y')
        A++;
    if(b_t>=37 && b_s=='Y')
        A++;
    if(c_t>=37 && c_s=='Y')
        A++;

    if(A>=2){
        cout << 'E';
    }
    else
        cout << 'N';
    return 0;
}