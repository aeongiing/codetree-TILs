#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    char c='A';
    for(int i=0; i<n; i++){
        for(int j=0; j<i+1; j++){
            cout << c;
            (int)c++;
            if((int)c==(int)'Z'+1){
                c='A';
            }
        }
        cout << endl;
    }
    return 0;
}