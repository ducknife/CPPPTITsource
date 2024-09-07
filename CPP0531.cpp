//tinh dinh thuc tu 3 vector tao boi 3 diem bat ki den diem con lai;
#include <bits/stdc++.h>
#define ll long long
using namespace std;
struct Point{
    ll x, y, z;
};
ll Det(Point a, Point b, Point c){
    return a.x * b.y * c.z + b.x * c.y * a.z + c.x * a.y * b.z - a.z * b.y * c.x - b.z * c.y * a.x - c.z * a.y * b.x;
}
int main(){
    int t; cin >> t;
    while (t--){
        Point a[4];
        for (int i = 0; i < 4; i++){
            cin >> a[i].x >> a[i].y >> a[i].z;
        }
        vector<Point>v(3);
        for (int i = 0; i < 3; i++){
            v[i].x = a[3].x - a[i].x;
            v[i].y = a[3].y - a[i].y;
            v[i].z = a[3].z - a[i].z;
        }
        if (!Det(v[0], v[1], v[2])) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}