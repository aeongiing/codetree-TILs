#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    while(s!="END"){
        
        for(int i=0; i<s.length()/2; i++){
            char temp=s[i];
            s[i]=s[s.length()-i-1];
            s[s.length()-i-1]=temp;
        }
        cout << s << endl;
        cin >> s;
    }
    return 0;
}