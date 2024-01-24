#include <iostream>
#include <string>
using namespace std;

int main() {
    string str[3];
    int max=0;
    int min=20;

    for(int i=0; i<3; i++){
        cin >> str[i];
        if(str[i].length()>max){
            max=str[i].length();
        }
        if(str[i].length()<=min){
            min=str[i].length();
        }
    }
    cout << max-min;
    return 0;
}