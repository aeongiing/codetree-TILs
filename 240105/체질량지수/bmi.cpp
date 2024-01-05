#include <iostream>
using namespace std;

int main() {
    int kg;
    int m;
    cin >> m >> kg;
    int bmi=kg/(((double)m/100)*((double)m/100));
    if(bmi>=25){
        cout << bmi << endl <<"Obesity";
    }
    else
        cout << bmi;
    return 0;
}