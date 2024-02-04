#include <iostream>
using namespace std;

void Up(int n){
    if(n==0){
        return;
    }
    Up(n-1);
    cout << n << " ";
}
void Down(int n){
    if(n==0){
        return;
    }
    cout << n << " ";
    Down(n-1);
    
}

int main() {
    int n;
    cin >> n;
    Up(n);
    cout << endl;
    Down(n);
    return 0;
}