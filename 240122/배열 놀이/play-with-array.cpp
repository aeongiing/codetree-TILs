#include <iostream>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;
    int arr[n];
    int quest[q];
    int a, b;
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    for(int i=0; i<q; i++){
        cin >> quest[i];
        if(quest[i]==1){
            cin >> a;
            cout << arr[a-1] << endl;
        }
        else if(quest[i]==2){
            cin >> a;
            for(int j=0; j<n; j++){
                if(arr[j]==a){
                    cout << j+1 << endl;
                    break;
                }
                else if(j==n-1){
                    cout << 0 << endl;;
                }
            }
        }
        else{
            cin >> a >> b;
            for(int j=a-1; j<=b-1; j++){
                cout << arr[j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}