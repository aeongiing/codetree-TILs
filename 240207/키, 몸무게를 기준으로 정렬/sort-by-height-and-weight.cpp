#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Person{
    public: 
        string name;
        int height, weight;

        Person(string name="", int height=0, int weight=0){
            this->name=name;
            this->height=height;
            this->weight=weight;
        }
};

bool cmp(Person a, Person b){
    if(a.height == b.height){
        return a.weight > b.weight;
    }
    return a.height < b.height;
}

int main() {
    int n;
    cin >> n;
    Person p[n];
    string name;
    int height, weight;
    for(int i=0; i<n; i++){
        cin >> name >> height >> weight;
        p[i]=Person(name, height, weight);
    }
    sort(p, p+n, cmp);
    for(int i=0; i<n; i++){
        cout << p[i].name << " " << p[i].height << " " << p[i].weight << endl;
    }
    return 0;
}