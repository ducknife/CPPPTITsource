#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll lcm(ll a, ll b){
    return a /__gcd(a, b) * b;
}
class PhanSo{
    private:
        ll tu, mau;
    public:
        PhanSo(ll tu, ll mau){
            this->tu = tu;
            this->mau = mau;
        }
        static void RutGon(PhanSo &a){
            ll gcd = __gcd(a.tu, a.mau);
            a.tu /= gcd;
            a.mau /= gcd;
        }
        friend PhanSo operator + (PhanSo a, PhanSo b){
            PhanSo tmp(1, 1);
            tmp.mau = lcm(a.mau, b.mau);
            ll heso1 = tmp.mau / a.mau;
            ll heso2 = tmp.mau / b.mau;
            tmp.tu = a.tu * heso1 + b.tu * heso2;
            RutGon(tmp);
            return tmp;
        }
        friend istream& operator >> (istream&in, PhanSo&a){
            in >> a.tu >> a.mau;
            return in;
        }
        friend ostream& operator << (ostream&out, PhanSo a){
            out << a.tu << "/" << a.mau;
            return out;
        }
};
int main() {
	PhanSo p(1,1), q(1,1);
	cin >> p >> q;
	cout << p + q;
	return 0;
}