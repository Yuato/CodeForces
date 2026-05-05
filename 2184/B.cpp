#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define pii pair<int,int>
#define pll pair<long long, long long>

using namespace std;

void solve(){
    long long s, k, m; cin >> s >> k >> m;
    long long ans=0;
    long long flips = m / k +1;
    if (k > s) {
        ans = max(ans, (s-(m%k)));
    }
    else{
        if (flips%2 == 0){
            ans = max (ans, k-(m%k));
        }
        else{
            ans = max (ans, s- (m%k));
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