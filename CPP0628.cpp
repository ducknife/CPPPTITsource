#include <bits/stdc++.h>
using namespace std;
class DN{
    private:
        string ma, ten;
        int soluong;
    public:
        void nhap(){
            cin >> ma;
            getline(cin >> ws, ten);
            cin >> soluong;
        }
        void in(){
            cout << ma << " " << ten << " " << soluong << endl;
        }
        int getSoLuong(){
            return soluong;
        }
        string getMa(){
            return ma;
        }
};
bool cmp(DN a, DN b){
    if (a.getSoLuong() == b.getSoLuong()) return a.getMa() < b.getMa();
    else return a.getSoLuong() > b.getSoLuong();
}
int main(){
    int n; cin >> n;
    vector<DN>v;
    for (int i = 0; i < n; i++){
        DN x; x.nhap();
        v.push_back(x);
    }
    sort(v.begin(), v.end(), cmp);
    for (int i = 0; i < n; i++) v[i].in();
}