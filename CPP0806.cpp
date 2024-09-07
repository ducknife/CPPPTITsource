#include <bits/stdc++.h>
#define ll long long
using namespace std;
class KH{
    public:
        string id, ten, gt, ns, dc;
        void setID(string id){
            this->id = id;
        }
};
class MH{
    public:
        string id, ten, donvi;
        ll giaban, giamua;
        void setID(string id){
            this->id = id;
        }
};
class HD{
    public:
        string id, mk, mh;
        ll soluong;
        void setID(string id){
            this->id = id;
        }
};
int main(){
    ifstream in1, in2, in3;
    in1.open("KH.in", ios::in);
    in2.open("MH.in", ios::in);
    in3.open("HD.in", ios::in);
    if (in1.is_open() && in2.is_open() && in3.is_open()){
        int n, m, k;
        map<string, KH>v1;
        map<string, MH>v2;
        vector<HD>v3(k);
        in1 >> n;
        for (int i = 0; i < n; i++){
            KH x;
            if (i + 1 < 10) x.setID("KH00" + to_string(i + 1));
            else x.setID("KH0" + to_string(i + 1));
            getline(in1 >> ws, x.ten);
            getline(in1, x.gt);
            getline(in1, x.ns);
            getline(in1, x.dc);
            v1.insert({x.id, x});
        }
        in2 >> m; 
        for (int i = 0; i < m; i++){
            MH x;
            if (i + 1 < 10) x.setID("MH00" + to_string(i + 1));
            else x.setID("MH0" + to_string(i + 1));
            getline(in2 >> ws, x.ten);
            getline(in2, x.donvi);
            in2 >> x.giamua >> x.giaban;
            v2.insert({x.id, x});
        }
        in3 >> k;
        for (int i = 0; i < k; i++){
            HD x; 
            in3 >> x.mk >> x.mh >> x.soluong;
            v3.push_back(x);
        }
        for (int i = 0; i < k; i++){
            cout << "HD" << setfill('0') << setw(3) << i + 1 << " ";
            cout << v1[v3[i].mk].ten << " " << v1[v3[i].mk].dc << " ";
            cout << v2[v3[i].mh].ten << " " << v2[v3[i].mh].donvi << " ";
            cout << v2[v3[i].mh].giamua << " " << v2[v3[i].mh].giaban << " ";
            cout << v3[i].soluong << " " << v2[v3[i].mh].giaban * v3[i].soluong;
            if (i != k - 1) cout << endl;
        }
    }
    in1.close(); in2.close(); in3.close();
}