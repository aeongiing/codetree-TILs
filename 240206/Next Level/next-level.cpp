#include <iostream>
using namespace std;

class Id_Level{
    public:
        string id;
        int level;
    Id_Level(string id="codetree", int level=10){
        this->id=id;
        this->level=level;
    }
};

int main() {
    Id_Level ls=Id_Level();
    cout << "user " << ls.id << " lv " << ls.level << endl;
    cin >> ls.id >> ls.level;
    cout << "user " << ls.id << " lv " << ls.level;
    return 0;
}