#include <bits/stdc++.h>
using namespace std;
bool cmp(pair<int, pair<int, int>>a, pair<int, pair<int, int>>b){
    if (a.first == b.first){
        if (a.second.first == b.second.first){
            return a.second.second < b.second.second;
        }
        else return a.second.first < b.second.first;
    }
    else return a.first < b.first;
}
int main(){
    int n; cin >> n;
    pair<int, pair<int, int>>a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i].first >> a[i].second.first >> a[i].second.second;
    }
    sort(a, a + n, cmp);
    for (int i = 0; i < n; i++){
        cout << a[i].first << ' ' << a[i].second.first << ' ' << a[i].second.second << endl;
    }
}