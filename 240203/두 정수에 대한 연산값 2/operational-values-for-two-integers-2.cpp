#include <iostream>
using namespace std;

void BiggerSmaller(int *a, int *b){
    if(*a > *b){
        *a = 2 * (*a);
        *b = *b + 10;
    }
    else{
        *a = *a + 10;
        *b = 2 * (*b);
    }
}

int main() {
    int a, b;
    cin >> a >> b;
    BiggerSmaller(&a, &b);
    cout << a << " " << b;
    return 0;
}