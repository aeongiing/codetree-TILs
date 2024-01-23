#include <iostream>
using namespace std;

int main() {
    int a1[3][3];
    int a2[3][3];
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cin >> a1[i][j];
        }
    }
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cin >> a2[i][j];
        }
    }
    int prod[3][3]={};
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            prod[i][j]=a1[i][j]*a2[i][j];
            cout << prod[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}