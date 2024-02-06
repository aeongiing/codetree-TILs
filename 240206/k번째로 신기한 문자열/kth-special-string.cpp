#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    string s[n];
    string T;
    cin >> T;

    vector<string> st;

    for(int i=0; i<n; i++){
        cin >> s[i];
        int cnt=0;
        for(int j=0; j<T.length(); j++){
            if(s[i][j]==T[j]){
                cnt++;
                continue;
            }
            else{
                break;
            }
        }
        if(cnt==T.length()){
            st.push_back(s[i]);
        }
    }
    sort(st.begin(), st.end());
    cout << st[k-1];
    return 0;
}