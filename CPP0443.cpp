#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; 
    cin >> t;
    while (t--){
        int n; cin >> n;
        map<int, int>mp;
        for (int i = 0; i < n - 1; i++){
            int x; cin >> x;
            mp[x] = 1;
        }
        for (int i = 0; i < n; i++){
            if (mp[i + 1] == 0){
                cout << i + 1 << endl;
                break;
            }
        }
    }
}