#include <bits/stdc++.h>
using namespace std;
struct PhanSo{
    long long tu, mau;
};
void RutGon(PhanSo &a){
    long long Ucln = __gcd(a.tu, a.mau);
    a.tu /= Ucln;
    a.mau /= Ucln;
}
long long lcm(long long a, long long b){
    return a /__gcd(a, b) * b;
}
void process(PhanSo a, PhanSo b){
    PhanSo res1, res2;
    res1.mau = lcm(a.mau, b.mau);
    long long hs1 = res1.mau / a.mau;
    long long hs2 = res1.mau / b.mau;
    res1.tu = a.tu * hs1 + b.tu * hs2;
    res1.tu *= res1.tu;
    res1.mau *= res1.mau;
    RutGon(res1);
    res2.mau = res1.mau * a.mau * b.mau;
    res2.tu = res1.tu * a.tu * b.tu;
    RutGon(res2);
    cout << res1.tu << "/" << res1.mau << " ";
    cout << res2.tu << "/" << res2.mau << endl;
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		PhanSo A;
		PhanSo B;
		cin >> A.tu >> A.mau >> B.tu >> B.mau;
		process(A, B);
	}
}