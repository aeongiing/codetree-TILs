#include <iostream>
#include <string>
using namespace std;

int main() {
    string A;
    cin >> A;
    string str={};
    int cnt=1;
    
    for(int i=0; A[i]!='\0'; i+=cnt){
        cnt=1;
        str+= A[i];
        for(int j=i; A[j]==A[j+1]; j++){
            cnt++;
        }
        str+=to_string(cnt);
    }
    cout << str.length() << endl;
    for(int i=0; i<str.length(); i++){
        cout << str[i];
    }
    return 0;
}