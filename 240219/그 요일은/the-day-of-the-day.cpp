#include <iostream>
#include <string>
using namespace std;

int main() {
    int m1, d1, m2, d2;
    cin >> m1 >> d1 >> m2 >> d2;
    string day;
    cin >> day;

    int num_of_days[13] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int elapsed_days=0;
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
    string day_array[7]={"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};
    int D;
    for(int i=0; i<7; i++){
        if(day==day_array[i]){
            D=i;
        }
    }
    if (D >= 0) {
        int count = elapsed_days / 7;
        if ((D + 1) % 7 >= elapsed_days % 7) {
            count++;
        }
        cout << count;
    }
    return 0;
}