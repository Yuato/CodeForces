#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define pii pair<int,int>
#define pll pair<long long, long long>

using namespace std;

void solve(){
    int n, k; cin >> n >> k;
    string s; cin >> s;
    int ans = 0;
    int c = k;

    forn (n){
        if (s[i] - '1' == 0 && c >= k-1){
            ans++;
            c = 0;
        }
        else if (s[i] - '1' == 0){
            c = 0;
        }
        else {
            c++;
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