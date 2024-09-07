#include <bits/stdc++.h>
using namespace std;
int main(){
    ifstream in("PTIT.in");
    ofstream out("PTIT.out");
    if (in.is_open()){
        string s;
        while (getline(in, s)) out << s << endl;
    }
    in.close();
}