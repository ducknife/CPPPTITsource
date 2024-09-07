#include <bits/stdc++.h>
using namespace std;
struct diem{
    double d1, d2, d3;
};
struct sinhvien{
    string msv, ten, lop;
    diem s;
    void input(){
        getline(cin >> ws, msv);
        getline(cin, ten);
        getline(cin, lop);
        cin >> s.d1 >> s.d2 >> s.d3;
    }
    void output(){
        cout << msv << " " << ten << " " << lop << " ";
        cout << fixed << setprecision(1) << s.d1 << " " << s.d2 << " " << s.d3;
    }
};
bool cmp(sinhvien a, sinhvien b){
    return a.ten < b.ten;
}
int main(){
    int n; cin >> n;
    sinhvien a[n];
    for (int i = 0; i < n; i++) a[i].input();
    sort(a, a + n, cmp);
    for (int i = 0; i < n; i++){
        cout << i + 1 << " ";
        a[i].output();
        if (i != n - 1) cout << endl;
    }
}