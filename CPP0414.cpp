#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        set<char>a;
        while (n--){
            string s;
            cin >> s;
            for (int i = 0; i < s.size(); i++){
                a.insert(s[i]);
            }
        }
        for (char i : a) cout << i << " ";
        cout << endl;
    }
}