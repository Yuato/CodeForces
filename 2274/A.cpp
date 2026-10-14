//solved
#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define pii pair<int,int>
#define pll pair<long long, long long>

using namespace std;

void solve() {
    int n; cin >> n;
    int arr [n];
    forn (n) {
        cin >> arr[i];
    }
    int ans = 0;
    forn (n){
        if (arr[n-1-i] > ans ){
            ans += 2*(arr[n-1-i] - ans);
        }
        else {
            ans -= 2*(ans - arr[n-1-i]);
        }
    }
    cout << ans/2 << '\n';
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