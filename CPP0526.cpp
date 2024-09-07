#include <bits/stdc++.h>
using namespace std;
struct Person{
    string name, dmy;
    int date, month, year;
    friend istream& operator >> (istream&in, Person &a){
        in >> a.name;
        in >> a.dmy;
        stringstream ss(a.dmy);
        string num;
        vector<int>v;
        while (getline(ss, num, '/')){
            v.push_back(stoi(num));
        }
        a.date = v.front(); a.month = v[1]; a.year = v.back();
        return in;
    }
    friend ostream& operator << (ostream&out, Person a){
        out << a.name;
        return out;
    }
};
bool cmp(Person a, Person b){
    if (a.year == b.year){
        if (a.month == b.month) return a.date < b.date;
        else return a.month < b.month;
    }
    else return a.year < b.year;
}
int main(){
    int n; cin >> n;
    vector<Person>v;
    for (int i = 0; i < n; i++){
        Person x; cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end(), cmp);
    cout << v.back() << endl;
    cout << v.front();
}