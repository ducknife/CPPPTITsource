#include <bits/stdc++.h>
using namespace std;
class Person{
    private:
        string name;
    public:
        void input(){
            getline(cin >> ws, name);
        }
        void output(){
            cout << name << " ";
        }
        string getName(){
            return name;
        }
};
class Teacher : public Person{
    private:
        int id;
        string subj;
    public:
        void input(){
            Person::input();
            getline(cin, subj);
            StandF(subj);
        }
        void setID(int id){
            this->id = id;
        }
        void output(){
            cout << "GV" << setfill('0') << setw(2) << id << " ";
            Person::output();
            cout << subj << endl;
        }
        void StandF(string &);
        string getName(){
            return Person::getName();
        }
};
void Teacher::StandF(string &s){
    string res = "";
    stringstream ss(s);
    string word;
    while (ss >> word) res += toupper(word[0]);
    s = res;
}
void LwrName(string &s){
    string res = "";
    stringstream ss(s);
    string word;
    while (ss >> word){
        for (char &x : word) x = tolower(x);
        res += word;
        res += " ";
    }
    res.pop_back();
    s = res;
}
int main(){
    int n; cin >> n;
    vector<Teacher>v;
    for (int i = 0; i < n; i++){
        Teacher x; 
        x.setID(i + 1);
        x.input();
        v.push_back(x);
    }
    int q; cin >> q;
    while (q--){
        string s; cin >> s;
        cout <<  "DANH SACH GIANG VIEN THEO TU KHOA " << s << ":" << endl;
        for (char &x : s) x = tolower(x);
        for (int i = 0; i < v.size(); i++){
            string tmp = v[i].getName();
            LwrName(tmp);
            if (tmp.find(s) != string::npos) v[i].output();
        }
    }
}