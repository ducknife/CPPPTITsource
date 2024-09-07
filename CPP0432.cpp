#include <bits/stdc++.h>
using namespace std;
bool cmp(string a, string b){
    string ab = a + b;
    string ba = b + a;
    return ab > ba;
}
int main(){
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        vector<string>v(n);
        for (int i = 0; i < n; i++) cin >> v[i];
        sort(v.begin(), v.end(), cmp);
        for (auto i : v) cout << i;
        cout << endl;
    }
}