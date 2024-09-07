#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        vector<int>a;
        int max_val = -1e9;
        for (int i = 0; i < n; i++){
            int x; cin >> x;
            a.push_back(x);
            max_val = max(max_val, x);
        }
        cout << max_val << endl;
    }
}