#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class People{
    public: 
        string name;
        int height;
        double weight;

        People(string name="", int height=0, double weight=0.0){
            this->name=name;
            this->height=height;
            this->weight=weight;
        }
};

bool cmp1(People a, People b){
    return a.name < b.name;
}

bool cmp2(People a, People b){
    return a.height > b.height;
}

int main() {
    string name;
    int height;
    double weight;

    People p[5];
    for(int i=0; i<5; i++){
        cin >> name >> height >> weight;
        p[i]=People(name, height, weight);
    }

    sort(p, p+5, cmp1);
    cout << "name" << endl;
    for(int i=0; i<5; i++){
        cout.precision(1);
        cout << p[i].name << " " << p[i].height << " " << fixed << p[i].weight << endl;
    }
    cout << endl;
    sort(p, p+5, cmp2);
    cout << "height" << endl;
    for(int i=0; i<5; i++){
        cout.precision(1);
        cout << p[i].name << " " << p[i].height << " " << fixed << p[i].weight << endl;
    }

    return 0;

}