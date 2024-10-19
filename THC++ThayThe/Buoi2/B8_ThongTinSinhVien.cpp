#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;
void ChuanHoaTen(string &s){
    string res = "";
    string word;
    stringstream ss(s);
    while (ss >> word){
        for (char &x : word) x = tolower(x);
        word[0] = toupper(word[0]);
        res += word;
        res += " ";
    }
    res.pop_back();
    s = res;
}
void ChuanHoaNgaySinh(string &s){
    if (s[2] != '/') s = "0" + s;
    if (s[5] != '/') s.insert(3, "0");
}
struct SinhVien{
    string ten, lop, ngaysinh;
    double gpa;
    int id;
    void input(){
        getline(cin >> ws, ten);
        ChuanHoaTen(ten);
        getline(cin, lop);
        getline(cin, ngaysinh);
        ChuanHoaNgaySinh(ngaysinh);
        cin >> gpa;
    }
    void output(){
        cout << "B20DCCN" << setfill('0') << setw(3) << id << " ";
        cout << ten << " " << lop << " " << ngaysinh << " ";
        cout << fixed << setprecision(2) << gpa << endl;
    }
};
void nhap(SinhVien a[], int n){
    for (int i = 0; i < n; i++){
        a[i].input();
        a[i].id = i + 1;
    }
}
void in(SinhVien a[], int n){
    for (int i = 0; i < n; i++){
        a[i].output();
    }
}
int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    in(ds, N);
    return 0;
}