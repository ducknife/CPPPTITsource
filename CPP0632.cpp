#include <bits/stdc++.h>
using namespace std;
#define ll long long
int idkh = 1, idmh = 1, idhd = 1;
class KhachHang;
class MatHang;
class HoaDon;
map<string, KhachHang>KH;
map<string, MatHang>MH;
class KhachHang{
    friend class HoaDon;
    private:
        string id, ten, gt, ns, dc;
    public:
        friend istream& operator >> (istream&in, KhachHang&a){
            if (idkh < 10) a.id = "KH00" + to_string(idkh++);
            else a.id = "KH0" + to_string(idkh++);
            getline(in >> ws, a.ten);
            cin >> a.gt >> a.ns;
            getline(in >> ws, a.dc);
            KH[a.id] = a;
            return in;
        }
        string getTen(){
            return ten;
        }
        string getDC(){
            return dc;
        }
};
class MatHang{
    friend class HoaDon;
    private:
        string id, ten, donvi;
        int giaban, giamua;
    public:
        friend istream& operator >> (istream&in, MatHang&a){
            if (idmh < 10) a.id = "MH00" + to_string(idmh++);
            else a.id = "MH0" + to_string(idmh++);
            getline(in >> ws, a.ten);
            getline(in, a.donvi);
            in >> a.giamua >> a.giaban;
            MH[a.id] = a;
            return in;
        }
        string getTen(){
            return ten;
        }
        int getGiaBan(){
            return giaban;
        }
        int getGiaMua(){
            return giamua;
        }
};
class HoaDon{
    private:
        string id, mkh, mmh;
        int soluong;
        ll loinhuan;
    public:
        friend istream& operator >> (istream&in, HoaDon&a){
            if (idhd < 10) a.id = "HD00" + to_string(idhd++);
            else a.id = "HD0" + to_string(idhd++);
            in >> a.mkh >> a.mmh >> a.soluong;
            a.loinhuan = 1ll * a.soluong * MH[a.mmh].getGiaBan() - 1ll * a.soluong * MH[a.mmh].getGiaMua();
            return in;
        }
        ll getBene(){
            return loinhuan;
        }
        string getTenMH(){
            return MH[mmh].getTen();
        }
        friend ostream& operator << (ostream&out, HoaDon a){
            out << a.id << " ";
            out << KH[a.mkh].getTen() << " " << KH[a.mkh].getDC() << " ";
            out << MH[a.mmh].getTen() << " " << a.soluong << " ";
            out << 1ll * a.soluong * MH[a.mmh].getGiaBan() << " ";
            out << a.loinhuan << endl;
            return out;
        }
};
bool cmp(HoaDon a, HoaDon b){
    if (a.getBene() == b.getBene()) return a.getTenMH() > b.getTenMH();
    return a.getBene() > b.getBene();
}
void sapxep(HoaDon a[], int n){
    sort(a, a + n, cmp);
}
int main(){
    KhachHang dskh[25];
    MatHang dsmh[45];
    HoaDon dshd[105];
    int N,M,K,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> dskh[i];
    cin >> M;
    for(i=0;i<M;i++) cin >> dsmh[i];
    cin >> K;
    for(i=0;i<K;i++) cin >> dshd[i];

    sapxep(dshd, K);

    for(i=0;i<K;i++) cout << dshd[i];
    return 0;
}