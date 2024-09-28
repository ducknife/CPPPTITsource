#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;
struct Note {
    string plate, type, date, status;
    int quantity;
    ll cost;
    void input(){
        cin >> plate >> type >> quantity >> status >> date;
        if (type == "Xe_con"){
            if (quantity == 5) {
                if (status == "IN") cost = 10000;
                else cost = 0;
            }
            else {
                if (status == "IN") cost = 15000;
                else cost = 0;
            }
        }
        else if (type == "Xe_tai") {
            if (status == "IN") cost = 20000;
            else cost = 0;
        }
        else if (type == "Xe_khach"){
            if (quantity == 29) {
                if (status == "IN") cost = 50000;
                else cost = 0;
            }
            else {
                if (status == "IN") cost = 70000;
                else cost = 0;
            }
        }
    }
};
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n;
    vector<Note>v;
    map<string, ll> res;
    for (int i = 0; i < n; i++){
        Note x; x.input();
        v.push_back(x);
        if (res.find(x.date) == res.end()){
            res.insert({x.date, x.cost});
        }
        else res[x.date] += x.cost;
    }
    for (int i = 0; i < v.size(); i++){
        auto it = res.find(v[i].date);
        if (it != res.end()){
            cout << v[i].date << ": " << res[v[i].date] << endl;
            res.erase(it);
        }
    }
    return 0;
}