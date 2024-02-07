#include <iostream>
#include <string>
using namespace std;

class Data{
    public:
    string name;
    int height, weight;

    Data(string name="", int height=0, int weight=0){
        this->name=name;
        this->height=height;
        this->weight=weight;
    }
};

int main() {
    int n;
    cin >> n;
    Data data_array[n];
    string name;
    int height, weight;
    for(int i=0; i<n; i++){
        cin >> name >> height >> weight;
        data_array[i]=Data(name, height, weight);
        for(int j=0; j<i; j++){
            if(data_array[i].height<data_array[j].height){
                Data temp=data_array[i];
                data_array[i]=data_array[j];
                data_array[j]=temp;
            }
        }
    }
    for(int i=0; i<n; i++){
        cout << data_array[i].name << " " << data_array[i].height << " " << data_array[i].weight << endl;
    }

    return 0;
}