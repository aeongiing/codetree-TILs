#include <iostream>
using namespace std;

bool IsYunYear(int y){
    if(y%4==0 && y%100!=0){
        return true;
    }
    else if(y%4==0 && y%100==0 && y%400!=0){
        return true;
    }
    else{
        return false;
    }
}

int main() {
    int y;
    cin >> y;
    if(IsYunYear(y)){
        cout << "true";
    }
    else{
        cout << "false";
    }
    return 0;
}