#include <iostream>
#include <algorithm>
using namespace std;

class Number{
    public:
        int num;

        Number(int num=0){
            this->num=num;
        }
};

bool cmp(Number a, Number b){
    return a.num < b.num;
}

int main() {
    int n;
    cin >> n;
    Number numbers[n];
    int array[n];
    
    for(int i=0; i<n; i++){
        int num;
        cin >> num;
        numbers[i]=Number(num);
        array[i]=numbers[i].num;
    }  
    sort(numbers, numbers+n, cmp);

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(array[i]==numbers[j].num){
                cout << j+1 << " ";
                numbers[j].num=0;
                break;
            }
        }
    }

    return 0;
}