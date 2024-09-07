#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while (t--){
        string s; 
        getline(cin >> ws, s);
        int k; cin >> k;
        set<char>a;
        for (char x : s) a.insert(x);
        if(s.size() >= 26 && 26 - a.size() <= k) cout << 1;
        else cout << 0;
        if (t > 0) cout << endl;
    }
}