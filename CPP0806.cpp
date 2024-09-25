#include <bits/stdc++.h>
#define ll long long
using namespace std;
void stdWord(string &s){ 
    stringstream ss(s);
    string word;
    string res = "";
    while (ss >> word){
        res += word;
        res += " ";
    }
    res.pop_back();
    s = res;
} 
class KH{
	public:
		string id, name, sex, birth, address;
        void output(){
            cout << name << " " << address << " ";
        }
};
class MH{
    public:
        string id, name, unit;
        ll buy, sell;
        void output(){
            cout << name << " " << unit << " " << buy << " " << sell << " ";
        }
};
class HD{
    public:
        string id, idKH, idMH;
        ll quantity;
        ll total;
};
map<string, KH>kh;
map<string, MH>mh;
void processKH(){
    ifstream in1("KH.in");
    if (in1.is_open()){
        int n; in1 >> n;
        for (int i = 1; i <= n; i++){
            KH x;
            x.id = "KH0";
            if (i < 10) x.id += "0" + to_string(i);
            else x.id += to_string(i);
            getline(in1 >> ws, x.name);
            getline(in1 >> ws, x.sex);
            getline(in1 >> ws, x.birth);
            getline(in1 >> ws, x.address);
            stdWord(x.name), stdWord(x.sex), stdWord(x.birth), stdWord(x.address);
            kh.insert({x.id, x});
        }
        in1.close();
    }
}
void processMH(){
    ifstream in2("MH.in");
    if (in2.is_open()){
        int m; in2 >> m;
        for (int i = 1; i <= m; i++){
            MH x;
            x.id = "MH0";
            if (i < 10) x.id += "0" + to_string(i);
            else x.id += to_string(i);
            getline(in2 >> ws, x.name);
            getline(in2 >> ws, x.unit);
            stdWord(x.unit);
            stdWord(x.name);
            in2 >> x.buy >> x.sell;
            mh.insert({x.id, x});
        }
        in2.close();
    }
}
void printHD(){
    vector<HD>a;
    ifstream in3("HD.in");
    if (in3.is_open()){
        int p; in3 >> p;
        in3.ignore();
        for (int i = 1; i <= p; i++){
            HD x;
            x.id = "HD0";
            if (i < 10) x.id += "0" + to_string(i);
            else x.id += to_string(i);
            in3 >> x.idKH >> x.idMH >> x.quantity;
            x.total = mh[x.idMH].sell * x.quantity;
            a.push_back(x);
        }
        in3.close();
    }
    for (auto i : a){
        cout << i.id << " ";
        kh[i.idKH].output();
        mh[i.idMH].output();
        cout << i.quantity << " " << i.total << endl;
    }
}
int main(){
	processKH();
    processMH();
    printHD();
}
