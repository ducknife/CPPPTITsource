#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        int n; cin >> n;
        int a[n], min = 1e9;
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n - 1; i++){
            for (int j = i + 1; j < n; j++){
                if (abs(a[j] + a[i]) < abs(min)) min = a[j] + a[i];
            }
        }
        cout << min << endl;
    }
}