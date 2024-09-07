#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        int a[n], ok = -1;
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n - 1; i++){
            for (int j = i + 1; j < n; j++){
                if (a[j] > a[i]) ok = max(ok, a[j] - a[i]);
            }
        }
        cout << ok << endl;
    }
}