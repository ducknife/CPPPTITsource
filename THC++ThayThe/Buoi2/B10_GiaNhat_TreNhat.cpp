#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;
struct Person{
    string name, birthday, date, month, year;
    friend istream& operator >> (istream&in, Person&x){
        in >> x.name >> x.birthday;
        x.date = x.birthday.substr(0, 2);
        x.month = x.birthday.substr(3, 2);
        x.year = x.birthday.substr(6, 4);
        return in;
    }
};
bool cmp(Person a, Person b){
    if (a.year == b.year){
        if (a.month == b.month) return a.date > b.date;
        return a.month > b.month;
    }
    return a.year > b.year;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n;
    vector<Person> v;
    for (int i = 1; i <= n; i++){
        Person x; cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end(), cmp);
    cout << v.front().name << endl;
    cout << v.back().name;
    return 0;
}