#include <bits/stdc++.h>
#define ll long long
#define forn(n) for (int i = 0; i < n; i++)
#define pii pair<int,int>
#define pll pair<long long, long long>

using namespace std;

void solve(){
    ll n, m, k; cin >> n >> m >> k;
    ll l = k-1;
    ll r = abs (n-k);

    ll a = max(l, r);
    ll b = min (l, r);

    ll ans = 0;

    ans += min (b, (m+1)/2);
    if (ans >= 1) m -= (ans-1)*2 + 1;
    ans += min (a, min(m, ans)+(m-ans+1)/2);
    ans += 1;

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