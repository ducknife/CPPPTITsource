#include <bits/stdc++.h>
using namespace std;
struct Hang{
    int ma;
    string ten, loai;
    double mua, ban, loinhuan;
    void setID(int id){
        this->ma = id;
    }
    void nhap(){
        getline(cin >> ws, ten);
        getline(cin, loai);
        cin >> mua >> ban;
        loinhuan = ban - mua;
    }
    void in(){
        cout << ma << " " << ten << " " << loai << " ";
        cout << fixed << setprecision(2) << loinhuan << endl;
    }
    double getBen(){
        return loinhuan;
    }
};
bool cmp(Hang a, Hang b){
    return a.getBen() > b.getBen();
}
int main(){
    int n; cin >> n;
    vector<Hang>v;
    for (int i = 0; i < n; i++){
        Hang x; x.nhap();
        x.setID(i + 1);
        v.push_back(x);
    }
    sort(v.begin(), v.end(), cmp);
    for (auto i : v) i.in();
}