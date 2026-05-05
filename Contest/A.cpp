#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define pii pair<int,int>
#define pll pair<long long, long long>

using namespace std;

void solve(){
    int n; cin >> n;
    map <int, int> m;

    int a;
    set <int> s;
    forn (n) {
        cin >> a;
        s.insert(a);
        m[a] += 1;
    }

    int ans = 0;
    for (int e : s){
        if (m[e] != e){
            if (e < m[e]) ans += m[e]-e;
            else ans += m[e];
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