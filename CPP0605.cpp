#include <bits/stdc++.h>
#define ll long long
using namespace std;
class PhanSo{
    private:
        ll tu, mau;
    public:
        PhanSo(ll tu, ll mau){
            this->tu = tu;
            this->mau = mau;
        }
        friend istream& operator >> (istream&in, PhanSo&a){
            in >> a.tu >> a.mau;
            return in;
        }
        void rutgon(){
            ll gcd = __gcd(tu, mau);
            tu /= gcd;
            mau /= gcd;
        }
        friend ostream& operator << (ostream&out, PhanSo a){
            out << a.tu << "/" << a.mau;
            return out;
        }
};
int main() {
	PhanSo p(1,1);
	cin >> p;
	p.rutgon();
	cout << p;
	return 0;
}