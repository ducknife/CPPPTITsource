#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        set<int> se;
        for (int i = 0; i < n; i++){
            int x; cin >> x;
            se.insert(x);
        }
        if (se.size() == 1) cout << -1 << endl;
        else {
            auto it = se.begin();
            cout << *it << " ";
            it++;
            cout << *it << endl;
        }
    }
    return 0;
}