#include <bits/stdc++.h>
using namespace std;
struct SinhVien{
    string ten, lop, ngaysinh;
    int ma;
    double gpa;
    void setID(int id){
        this->ma = id;
    }
};
void stdname(string &s){//chuan hoa ten;
    stringstream ss(s);
    string word;
    string res = "";
    while (ss >> word){
        for (char &x : word) x = tolower(x);
        word[0] = toupper(word[0]);
        res += word;
        res += " ";
    }
    res.pop_back();
    s = res;
}
void stdbirth(string &s){ //chuan hoa ngay sinh;
    if (s[2] != '/') s = "0" + s;
    if (s[5] != '/') s.insert(3, "0");
}
bool cmp(SinhVien a, SinhVien b){
    return a.gpa > b.gpa;
}
void nhap(SinhVien a[], int n){
    for (int i = 0; i < n; i++){
        a[i].setID(i + 1);
        getline(cin >> ws, a[i].ten);
        stdname(a[i].ten);
        cin >> a[i].lop >> a[i].ngaysinh >> a[i].gpa;
        stdbirth(a[i].ngaysinh);
    }
}
void sapxep(SinhVien a[], int n){
    sort(a, a + n, cmp);
}
void in(SinhVien a[], int n){
    for (int i = 0; i < n; i++){
        cout << "B20DCCN0" << setfill('0') << setw(2) << a[i].ma << " ";
        cout << a[i].ten << " " << a[i].lop << " " << a[i].ngaysinh << " ";
        cout << fixed << setprecision(2) << a[i].gpa;
        if (i != n - 1) cout << endl;
    }
}
int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    sapxep(ds,N);
    in(ds, N);
    return 0;
}