#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;
int cnt = 1;
struct NhanVien{
    string id, name, sex, bir, add, tax, date;
    friend istream& operator >> (istream &in, NhanVien &a){
        if (cnt < 10) a.id = "0000" + to_string(cnt++);
        else a.id = "000" + to_string(cnt++);
        getline(in >> ws, a.name);
        in >> a.sex >> a.bir;
        getline(in >> ws, a.add);
        in >> a.tax >> a.date;
        return in;
    }
    friend ostream& operator << (ostream&out, NhanVien a){
        out << a.id << " " << a.name << " " << a.sex << " " << a.bir << " " << a.add << " " << a.tax << " " << a.date << endl;
        return out;
    }
};
int main(){
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}