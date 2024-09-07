#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        /* set<int>a;
        for (int i = 0; i < n; i++){
            int x; cin >> x;
            a.insert(x);
        }
        auto it1 = a.begin();
        auto it2 = a.rbegin();
        while (*it1 < *it2){
            cout << *it2 << " " <<  *it1 << " ";
            it1++; it2++;
        }
        if (a.size() % 2 != 0) cout << *it1;
        cout << endl; */ //dung set
        vector<int>a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        sort(a.begin(), a.end());
        int l = 0, r = n - 1;
        while (l < r){
            cout << a[r] << " " << a[l] << " ";
            r--; l++;
        }
        if (n % 2 != 0) cout << a[r];
        cout << endl;
    }
}