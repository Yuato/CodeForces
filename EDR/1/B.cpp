#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define pii pair<int,int>
#define pll pair<long long, long long>

using namespace std;

void solve(){
    string s; cin >> s;
    int m; cin >> m;
    string a;

    for (int j = 0; j < m; j++){
        int l, r, k; cin >> l >> r >> k;
        k %= (r-l+1);
        a = s.substr(l-1, r-l+1);
        forn(a.size()){
            s[l-1+(i+k)%(r-l+1)] = a[i];
        }
    }
    cout << s << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t=1;
    forn (t){
        solve();
    }

    return 0;
}