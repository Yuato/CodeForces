#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define pii pair<int,int>
#define pll pair<long long, long long>

using namespace std;

void solve(){
    int n; cin >> n;
    vector<int>v(n);
    forn (n) {
        cin >> v[i];
    }

    sort(v.begin(),v.end());
    bool block = false;
    forn (n-1) {
        if (v[i] == v[i+1]){
            block = true;
        }
    }
    if (block) cout << -1;
    else {
        forn (n) {
            cout << v[n-i-1]<< " ";
        }
    }
    cout << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    forn (t){
        solve();
    }

    return 0;
}