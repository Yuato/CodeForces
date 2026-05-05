#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define pii pair<int,int>
#define pll pair<long long, long long>

using namespace std;

void solve(){
    int r, x, d, n; cin >> r >> x >> d >> n;
    string s; cin >> s;
    int ans = 0;
    forn (n){
        if (s[i] == '1'){
            ans++;
            r = max(r-d, 0);
        }
        else {
            if (r < x){
                ans++;
                r = max(r-d, 0);
            }
        }
    }
    cout << ans << '\n';
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