#include <iostream>
using namespace std;

bool IsExist(int m, int d){
    if(m==2){
        if(d<=28){
            return true;
        }
        return false;
    }
    else if(m<=7 && m%2!=0){
        if(d<=31){
            return true;
        }
        return false;
    }
    else if(m<=7 && m%2==0){
        if(d<=30){
            return true;
        }
        return false;
    }
    else if(m>=8 && m<=12 && m%2==0){
        if(d<=31){
            return true;
        }
        return false;
    }
    else if(m>=8 && m<=12 && m%2!=0){
        if(d<=30){
            return true;
        }
        return false;
    }
    return false;
}

int main() {
    int m, d;
    cin >> m >> d;
    if(IsExist(m, d)){
        cout << "Yes";
    }
    else{
        cout << "No";
    }
    return 0;
}