#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    int a[n][3];
    pair<int, int>count[n];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < 3; j++){
            cin >> a[i][j];
            if (a[i][j] == 1) count[i].first++;
            else count[i].second++;
        }
    }
    int res = 0;
    for (int i = 0; i < n; i++){
        if (count[i].first > count[i].second) res++;
    }
    cout << res;
}