#include <bits/stdc++.h>
using namespace std;
struct node{
    int x;
    int fre;
};
int main(){
    int n;
    vector<node>a;
    while (cin >> n){
        int ok = 0;
        for (int i = 0; i < a.size(); i++){
            if (a[i].x == n){
              a[i].fre++;
              ok = 1;
              break;
            }
        }
        if (!ok) a.push_back({n, 1});
    }
    for (auto i : a) cout << i.x << " " << i.fre << endl;
}