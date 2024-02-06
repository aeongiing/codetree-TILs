#include <iostream>
#include <string>
using namespace std;

class Stop{
    public:
        string code;
        char color;
        int second;

        Stop(string code, char color, int second){
            this->code=code;
            this->color=color;
            this->second=second;
        }
};

int main() {
    string code;
    char color;
    int second;
    cin >> code >> color >> second;
    Stop stop1 = Stop(code, color, second);
    cout << "code : " << stop1.code << endl;
    cout << "color : " << stop1.color << endl;
    cout << "second : " << stop1.second;
    return 0;
}