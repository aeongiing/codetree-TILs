#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    string str;
    int num;
    for(int i=0; i<n; i++){
        cin >> num;
        str+=to_string(num);
    }
    int q, r;
    q=str.length()/5;
    r=str.length()%5;
    for(int i=0; i<q; i++){
        for(int j=0; j<5; j++){
            cout << str[i*5 + j];
        }
        cout << endl;
    }
    for(int i=0; i<r; i++){
        cout << str[q*5+i];
    }
    return 0;
}