#include <iostream>
#include <string>
using namespace std;

class Product{
    public:
        string name;
        int code;

        Product(string name="codetree", int code=50){
            this->name=name;
            this->code=code;
        }
};

int main() {
    string name;
    int code;
    Product p1 = Product();
    cout << "product " << p1.code << " is " << p1.name << endl;
    cin >> name >> code;
    p1 = Product(name, code);
    cout << "product " << p1.code << " is " << p1.name;
    
    
    return 0;
}