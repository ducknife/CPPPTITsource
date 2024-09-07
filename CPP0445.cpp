#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while (t--){
        int n;
        cin >> n;
        set<int>a;
        for (int i = 0; i < n; i++){
            int x; cin >> x;
            a.insert(x);
        }
        if (a.size() == 1) cout << -1 << endl;
        else if (a.size() > 1){
            auto it = a.begin();
            cout << *it << " ";
            it++;
            cout << *it << endl;
        }
    }
}