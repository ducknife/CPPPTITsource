#include <bits/stdc++.h>
using namespace std;
bool cmp(pair<string, int>a, pair<string, int>b){
    if (a.first.size() == b.first.size()) return a.first > b.first;
    else return a.first.size() > b.first.size();
}
int main(){
    string s;
    map<string, int>mp;
    vector<pair<string, int>>v;
    while (cin >> s){
        string tmp = s;
        reverse(tmp.begin(), tmp.end());
        if (s == tmp && s.size() > 1) mp[s]++;
    }
    for (auto i : mp) v.push_back({i.first, i.second});
    sort(v.begin(), v.end(), cmp);
    for (auto i : v) cout << i.first << ' ' << i.second << endl;
}