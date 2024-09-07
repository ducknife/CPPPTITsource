#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        vector<int>a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        int max_dis = -1e9;
        for (int i = 0; i < n - 1; i++){
            for (int j = n - 1; j > i; j--){
                if (a[j] > a[i]){
                    max_dis = max(max_dis, j - i);
                    break;
                }
            }
        }
        cout << max_dis << endl;
    }
}