#include <iostream>
#include <string>
#include <algorithm>
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

bool cmp(Data a, Data b) {
    return a.height < b.height;
}

int main() {
    int n;
    cin >> n;
    Data data_array[n];
    string name;
    int height, weight;
    for(int i=0; i<n; i++){
        cin >> name >> height >> weight;
        data_array[i]=Data(name, height, weight);
    }
    sort(data_array, data_array+n, cmp);
    for(int i=0; i<n; i++){
        cout << data_array[i].name << " " << data_array[i].height << " " << data_array[i].weight << endl;
    }

    return 0;
}