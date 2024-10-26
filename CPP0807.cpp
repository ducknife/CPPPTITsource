#include <bits/stdc++.h>
using namespace std;
int main(){
    ifstream in;
    in.open("DATA.in", ios::in);
    if (in.is_open()){
        int n, m;
        in >> n >> m;
        map<int, int>mp;
        for (int i = 0; i < n; i++){
            int x; in >> x;
            mp[x] = 1;
        }
        for (int i = 0; i < m; i++){
            int x; in >> x;
            if (mp[x] == 1) mp[x] = 2;
        }
        vector<int>v;
        for (auto i : mp) {
            if (i.second == 2) v.push_back(i.first);
        }
        for (int i = 0; i < v.size(); i++){
            cout << v[i];
            if (i != v.size() - 1) cout << ' ';
        }
    }
    in.close();
}
