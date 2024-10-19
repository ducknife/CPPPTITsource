#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;
struct PhanSo{
    ll tu, mau;
    friend void RutGon(PhanSo &a){
        ll gcd = __gcd(a.tu, a.mau);
        a.tu /= gcd;
        a.mau /= gcd;
    }
    friend PhanSo operator + (PhanSo a, PhanSo b){
        PhanSo res;
        res.mau = a.mau / __gcd(a.mau, b.mau) * b.mau;
        ll hs1 = res.mau / a.mau, hs2 = res.mau / b.mau;
        res.tu = a.tu * hs1 + b.tu * hs2;
        RutGon(res);
        return res;
    }
    friend PhanSo operator * (PhanSo a, PhanSo b){
        PhanSo res;
        res.mau = a.mau * b.mau;
        res.tu = a.tu * b.tu;
        RutGon(res);
        return res;
    }
};
void process(PhanSo a, PhanSo b){
    PhanSo tmp = a + b;
    PhanSo c = tmp * tmp;
    PhanSo tmp2 = a * b;
    PhanSo d = tmp2 * c;
    cout << c.tu << "/" << c.mau << " ";
    cout << d.tu << "/" << d.mau << endl;
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