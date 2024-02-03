#include <iostream>
using namespace std; 

void BiggerSmaller(int *a, int *b){
    if(*a>*b){
        *a = *a+25;
        *b = 2*(*b);
    }
    else{
        *b = *b+25;
        *a = 2*(*a);
    }
}

int main() {
    int a, b;
    cin >> a >> b;
    BiggerSmaller(&a, &b);
    cout << a << " " << b;
    return 0;
}