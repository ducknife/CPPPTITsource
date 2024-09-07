#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while (t--){
        string s; cin >> s;
        int cnt = s.size();
        map<char, int>mp;
        for (char x : s) mp[x]++;
        for (auto x : mp){
            cnt += (x.second - 1) * x.second / 2;
        }
        cout << cnt << endl;
    }
}