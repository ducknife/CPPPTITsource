#include <iostream>
#include <set>
using namespace std;
int main(){
    int n; cin >> n;
    set<int>se;
    for (int i = 0; i < n; i++){
        int x; cin >> x;
        se.insert(x);
    }
    for (auto i : se) cout << i << " ";
}