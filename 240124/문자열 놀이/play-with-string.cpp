#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    int q;
    cin >> s >> q;
    while(q--){
        int quest;
        cin >> quest;
        if(quest==1){
            int a, b;
            cin >> a >> b;
            char temp=s[a-1];
            s[a-1]=s[b-1];
            s[b-1]=temp;
            cout << s << endl;
        }
        else if(quest==2){
            char a, b;
            cin >> a >> b;
            for(int i=0; i<s.length(); i++){
                if(s[i]==a){
                    s[i]=b;
                }
            }
            cout << s << endl;
        }
    }

    return 0;
}