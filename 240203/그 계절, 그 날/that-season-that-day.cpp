#include <iostream>
using namespace std;

bool IsExist(int y, int m, int d){
    if(y%4==0 || (y%4==0 && y%100!=0) || (y%4==0 && y%100==0 && y%400==0)){
        if(m==2){
            if(d<=29){
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
    else{
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
}

int main() {
    int y, m, d;
    cin >> y >> m >> d;
    if(IsExist(y, m, d)){
        if(m>=3 && m<=5){
            cout << "Spring";
        }
        else if(m>=6 && m<=8){
            cout << "Summer";
        }
        else if(m>=9 && m<=11){
            cout << "Fall";
        }
        else{
            cout << "Winter";
        }
    }
    else{
        cout << -1;
    }
    return 0;
}