#include <bits/stdc++.h>
using namespace std;
class Person{
    private:
        string Name;
    public:
        void input(){
            getline(cin, Name);
        }
        void output(){
            cout << Name << " ";
        }
};
class Student : public Person{
    private:
        string Id, Class, Email;
    public:
        void input(){
            getline(cin >> ws, Id);
            Person::input();
            getline(cin, Class);
            cin >> Email;
        }
        void output(){
            cout << Id << " ";
            Person::output();
            cout << Class << " " << Email << endl;
        }
        string getClass(){
            return Class;
        }
        string getId(){
            return Id; 
        }
};
bool cmp(Student a, Student b){
    if (a.getClass() == b.getClass()) return a.getId() < b.getId();
    else return a.getClass() < b.getClass();
}
int main(){
    int n; cin >> n;
    vector<Student>v;
    for (int i = 0; i < n; i++){
        Student x; x.input();
        v.push_back(x);
    }
    sort(v.begin(), v.end(), cmp);
    for (auto i : v) i.output();
}