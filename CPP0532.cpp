//cong thuc shoelace : phai ket noi diem cuoi voi diem dau tien;
#include <bits/stdc++.h>
using namespace std;
struct Point{
    double x, y;
};
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        vector<Point>a(n);
        for (int i = 0; i < n; i++) cin >> a[i].x >> a[i].y;
        double S = 0;
        for (int i = 0; i < n - 1; i++){
            S = S + a[i].x * a[i + 1].y - a[i + 1].x * a[i].y;
        }
        S += a[n - 1].x * a[0].y - a[0].x * a[n - 1].y;
        cout << fixed << setprecision(3) << abs(S) / 2 << endl;
    }
}