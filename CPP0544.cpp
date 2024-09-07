#include <bits/stdc++.h>
#define PI 3.141592653589793238
using namespace std;
struct point{
    double x, y;
};
struct Triangle{
    point A, B, C;
    double AB, BC, CA;
    double S;
    double R;
    void input(){
        cin >> A.x >> A.y >> B.x >> B.y >> C.x >> C.y;
        AB = sqrt((A.x - B.x)*(A.x - B.x) + (A.y - B.y)*(A.y - B.y));
        BC = sqrt((C.x - B.x)*(C.x - B.x) + (C.y - B.y)*(C.y - B.y));
        CA = sqrt((A.x - C.x)*(A.x - C.x) + (A.y - C.y)*(A.y - C.y));
    }
};
bool check(Triangle x){
    if (x.AB + x.BC > x.CA && x.BC + x.CA > x.AB & x.AB + x.CA > x.BC){
        return true;
    }
    return false;
}
int main(){
    int t; cin >> t;
    while (t--){
        Triangle tri;
        tri.input();
        if (check(tri)){
            double p = (tri.AB + tri.BC + tri.CA) / 2;
            tri.S = sqrt(p*(p - tri.AB)*(p - tri.CA)*(p - tri.BC));
            tri.R = tri.AB / tri.S * tri.BC * tri.CA / 4;
            cout << fixed << setprecision(3) << PI * tri.R * tri.R;
        }
        else cout << "INVALID";
        if (t > 0) cout << endl;
    }
}