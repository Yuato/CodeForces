//Solved
/*
1. Simple logic of keeping track of unique numbers, and the total length of those nums.
2. Mod k by the num of unique numbers left in array
*/
#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define pii pair<int,int>
#define pll pair<long long, long long>


using namespace std;


void solve(){
    int n;  cin >> n;
    int k; cin >> k;
    set<int> v;
    map<int,int>m;

    int prev; cin >> prev;
    int len = 1;
    int unq = 0;
    forn (n-1) {
        int a; cin >> a;
        if (a == prev){
            len++;
        }
        else {
            v.insert(len);
            if (m.find(len) != m.end()){
                m[len]++;
            }
            else {
                m[len] = 1;
            }
            len = 1;
            prev = a;
            unq ++;
        }
    }

    v.insert(len);
    if (m.find(len) != m.end()){
        m[len]++;
    }
    else {
        m[len] = 1;
    }
    unq++;
    int sz = n;

    int ans = 0;
    int dec = 0;
    for (int i: v){
        sz -= unq*(i-dec-1);
        if (sz <= k){
            if ((k-sz)%unq == 0){
                ans++;
            }
        }
        sz -= unq;
        unq -= m[i];
        dec = i;
    }
    cout << ans << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin>>t;
    forn (t){
        solve();
    }

    return 0;
}