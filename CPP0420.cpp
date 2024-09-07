#include <bits/stdc++.h>
using namespace std;
bool cmp(pair<int, int>a, pair<int, int>b){
    return a.first < b.first;
}
int main(){
    int t; cin >> t;
    while (t--){
        int n, x; cin >> n >> x;
        vector<pair<int, int>>v;
        for (int i = 0; i < n; i++){
            int y; cin >> y;
            v.push_back({abs(x - y), y});
        }
        stable_sort(v.begin(), v.end(), cmp);
        for (int i = 0; i < n; i++){
            cout << v[i].second;
            if (i != n - 1) cout << " ";
        }
        if (t > 0) cout << endl;
    }
}