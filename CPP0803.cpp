#include <bits/stdc++.h>
using namespace std;
int main(){
    ifstream in("DATA.in");
    if(in.is_open()){
        int n;
        map<int, int>mp;
        while (in >> n) mp[n]++;
        for (auto i : mp) cout << i.first << ' ' << i.second << endl;
    }
    in.close();
}