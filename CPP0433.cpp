#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;
bool cmp(pair<int, int>a, pair<int, int>b){
    if (a.second == b.second) return a.first < b.first;
    else return a.second > b.second;
}
int main(){
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        vector<pair<int, int>>v;
        map<int, int>mp;
        for (int i = 0; i < n; i++){
            int x; cin >> x;
            mp[x]++;
        }
        for (auto i : mp) v.push_back({i.first, i.second});
        sort(v.begin(), v.end(), cmp);
        for (int i = 0; i < v.size(); i++){
            for (int j = 0; j < v[i].second; j++) cout << v[i].first << " ";
        }
        cout << endl;
    }
}