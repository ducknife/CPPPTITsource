#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while (t--){
        string s;
        cin >> s;
        for (int i = 0; i < s.size(); i++){
            int cnt = 1;
            while (s[i] == s[i + 1]){
                ++cnt;
                ++i;
            }
            cout << s[i] << cnt;
        }
        cout << endl;
    }
}