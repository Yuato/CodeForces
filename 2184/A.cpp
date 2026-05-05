#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define pii pair<int,int>
#define pll pair<long long, long long>

using namespace std;

void solve(){
    int n; cin >> n;
    int m = n % 2;
    int ans = 0;
    if (n <= 3) ans = n;
    else if (n%2 == 0){
        ans = 0;
    }
    else {
        ans = 1;
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