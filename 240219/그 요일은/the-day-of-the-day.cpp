#include <iostream>
#include <string>
using namespace std;

int main() {
    int m1, d1, m2, d2;
    cin >> m1 >> d1 >> m2 >> d2;
    string day;
    cin >> day;

    int num_of_days[13] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int day_index;
    if(day == "Mon")
        day_index = 0;
    else if(day == "Tue")
        day_index = 1;
    else if(day == "Wed")
        day_index = 2;
    else if(day == "Thu")
        day_index = 3;
    else if(day == "Fri")
        day_index = 4;
    else if(day == "Sat")
        day_index = 5;
    else if(day == "Sun")
        day_index = 6;

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
    int num_of_target_day = elapsed_days/7;
    if(elapsed_days%7 >= day_index)
        num_of_target_day++;

    cout << num_of_target_day;
    
    return 0;
}