#include <iostream>
using namespace std;

int Addition(int a, int c){
    return a+c;
}
int Subtraction(int a, int c){
    return a-c;
}
int Multiplication(int a, int c){
    return a*c;
}
int Division(int a, int c){
    return a/c;
}

int main() {
    int a, c;
    char o;
    cin >> a >> o >> c;
    if(o=='+'){
        cout << a << " " << o << " " << c << " = " << Addition(a, c);
    }
    else if(o=='-'){
        cout << a << " " << o << " " << c << " = " << Subtraction(a, c);
    }
    else if(o=='*'){
        cout << a << " " << o << " " << c << " = " << Multiplication(a, c);
    }
    else if(o=='/'){
        cout << a << " " << o << " " << c << " = " << Division(a, c);
    }
    else{
        cout << "False";
    }
    return 0;
}