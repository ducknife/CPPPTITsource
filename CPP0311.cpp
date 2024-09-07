#include <bits/stdc++.h>
using namespace std;
bool cmp(pair<char, int>a, pair<char, int>b){
    return a.second < b.second;
}
int main(){
    int t; cin >> t;
    while (t--){
        string s; cin >> s;
        map<char, int>a;
        for (char x : s) a[x]++;
        vector<pair<char, int>>v;
        for (auto x : a) v.push_back({x.first, x.second});
        sort(v.begin(), v.end(), cmp);
        int sum = 0, fremax = v[v.size() - 1].second;
        for (auto i : v) sum += i.second;
        sum -= fremax;
        if (fremax - sum >= 2) cout << 0;
        else cout << 1;
        if (t > 0) cout << endl;
    }
}