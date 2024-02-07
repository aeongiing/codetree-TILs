#include <iostream>
#include <string>
using namespace std;

class Data{
    public:
        string date;
        string day;
        string weather;

        Data(string date="", string day="", string weather=""){
            this->date=date;
            this->day=day;
            this->weather=weather;
        }
};

int main() {
    int n;
    cin >> n;
    string date, day, weather;
    Data data_array[n];
    for(int i=0; i<n; i++){
        cin >> date >> day >> weather;
        data_array[i]=Data(date, day, weather);
        if(data_array[i].weather=="Rain"){
            if(data_array[0].weather!="Rain"){
                data_array[0]=data_array[i];
            }
            else{
                if(data_array[i].date < data_array[0].date){
                    data_array[0]=data_array[i];
                }
            }
        }
    }

    cout << data_array[0].date << " " << data_array[0].day << " " << data_array[0].weather;
    return 0;
}