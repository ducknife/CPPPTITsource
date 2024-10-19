#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;
int n, k, x[100], isFinal = 0;
void init(){
    for (int i = 1; i <= k; i++) x[i] = i;
}
void Gen(){
    int i = k;
    while (i >= 1 && x[i] == n - k + i){
        i--;
    }
    if (i == 0) isFinal = 1;
    else {
        x[i]++;
        for (int j = i + 1; j <= k; j++) x[j] = x[j - 1] + 1;
    }
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--){
        cin >> n >> k;
        memset(x, 0, sizeof(x));
        isFinal = 0;
        init();
        while (!isFinal){
            for (int i = 1; i <= k; i++) cout << x[i];
            cout << " ";
            Gen();
        }
        cout << endl;
    }
    return 0;
}