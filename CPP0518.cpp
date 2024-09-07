#include <bits/stdc++.h>
using namespace std;
int id = 1;
struct NhanVien{
    string ma, ten, gt, ngaysinh, diachi, mathue, ngayki;
    int ngay, thang, nam;
};
void nhap(NhanVien &a){
    if (id < 10) a.ma = "0000" + to_string(id++);
    else a.ma = "000" + to_string(id++);
    getline(cin >> ws, a.ten);
    getline(cin, a.gt);
    getline(cin, a.ngaysinh);
    getline(cin, a.diachi);
    getline(cin, a.mathue);
    getline(cin, a.ngayki);
    a.ngay = stoi(a.ngaysinh.substr(3, 2));
    a.thang = stoi(a.ngaysinh.substr(0, 2));
    a.nam = stoi(a.ngaysinh.substr(6, 4));
}
bool cmp(NhanVien a, NhanVien b){
    if (a.nam == b.nam){
        if (a.thang == b.thang) return a.ngay < b.ngay;
        else return a.thang < b.thang;
    }
    else return a.nam < b.nam;
}
void sapxep(NhanVien a[], int n){
    sort(a, a + n, cmp);
}
void inds(NhanVien a[], int n){
    for (int i = 0; i < n; i++){
        cout << a[i].ma << " " << a[i].ten << " " << a[i].gt << " " << a[i].ngaysinh << " " << a[i].diachi << " ";
        cout << a[i].mathue << " " << a[i].ngayki << endl;
    }
}
int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    sapxep(ds, N);
    inds(ds, N);
    return 0;
}