#include <iostream>
#include <string>
using namespace std;

class Information{
    public:
        string name;
        string number;
        string place;

        Information(string name="", string number="", string place=""){
            this->name=name;
            this->number=number;
            this->place=place;
        }
};

int main() {
    int n;
    cin >> n;
    string name, number, place;
    Information informations[n];
    
    for(int i=0; i<n; i++){
        cin >> name >> number >> place;
        informations[i]=Information(name, number, place);
        if(informations[i].name>informations[0].name){
            informations[0]=informations[i];
        }
    }
    cout << "name " << informations[0].name << endl;
    cout << "addr " << informations[0].number << endl;
    cout << "city " << informations[0].place;
    return 0;
}