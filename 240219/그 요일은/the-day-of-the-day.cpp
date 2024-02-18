#include <iostream>
#include <string>
using namespace std;

int main() {
    int m1, d1, m2, d2;
    cin >> m1 >> d1 >> m2 >> d2;
    string day;
    cin >> day;

    int num_of_days[13] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int elapsed_days=1;
    while(true) {
        if(m1 == m2 && d1 == d2)
            break;

        elapsed_days++;
        d1++;
    
        if(d1 > num_of_days[m1]) {
            m1++;
            d1 = 1;
        }
    }
    int dday=elapsed_days%7;
    if(dday==0){
        cout << elapsed_days/7;
    }
    else{
        cout << elapsed_days/7+1;
    }
    
    return 0;
}