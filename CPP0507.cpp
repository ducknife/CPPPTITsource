#include <iostream>
#include <algorithm>
using namespace std;
#define ll long long
ll lcm(int a, int b){
    return 1ll * a /__gcd(a, b) * b;
}
struct PhanSo{
    ll tu, mau;
};
void nhap(PhanSo &a){
    cin >> a.tu >> a.mau;
}
void in(PhanSo a){
    cout << a.tu << "/" << a.mau;
}
void RutGon(PhanSo &a){
    ll ucln = __gcd(a.tu, a.mau);
    a.tu /= ucln;
    a.mau /= ucln;
}
PhanSo tong(PhanSo a, PhanSo b){
    PhanSo tmp;
    tmp.mau = lcm(a.mau, b.mau);
    int hs1 = tmp.mau / a.mau;
    int hs2 = tmp.mau / b.mau;
    tmp.tu = 1ll * a.tu * hs1 + 1ll * b.tu * hs2;
    RutGon(tmp);
    return tmp;
}
int main() {
	struct PhanSo p,q;
	nhap(p); nhap(q);
	PhanSo t = tong(p,q);
	in(t);
	return 0;
}