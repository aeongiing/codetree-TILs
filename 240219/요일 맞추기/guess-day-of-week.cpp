#include <iostream>
#include <string>
using namespace std;

int main() {
    int m1, d1, m2, d2;
    cin >> m1 >> d1 >> m2 >> d2;
    int num_of_days[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    int elapsed_days=0;
    
    if(m1>m2 || ((m1==m2)&&(d1>d2))){
        while(true){
            if(m1 == m2 && d1 == d2)
                break;
        
            elapsed_days++;
            d2++;
        
            if(d2 > num_of_days[m2]) {
                m2++;
                d2 = 1;
            }            
        }

        int day=elapsed_days%7;
        string day_array[7]={"Mon", "Sun", "Sat", "Fri", "Thu", "Wed", "Tue"};
        cout << day_array[day];
    }
    else{
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
        int day=elapsed_days%7;
        string day_array[7]={"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};
        cout << day_array[day];        
    }
    return 0;
}