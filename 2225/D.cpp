#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define pii pair<int,int>
#define pll pair<long long, long long>

using namespace std;

void solve(){
    long long n, x; cin >> n >> x; 
    long long mod = x%4;

    long long one = 0, zero = 0;
    long long lone = 0, lzero = 0;
    long long ans = 0;

    
    ans %= 998244353;
    cout << ans;
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