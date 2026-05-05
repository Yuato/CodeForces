#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define pii pair<int,int>
#define pll pair<long long, long long>

using namespace std;

void solve(){
    int n;
    cin >> n;
    int ans = 0;
    while (n>2){
        ans += n / 3;
        if (n%3 == 0){
            n = n/3;
        }
        else if (n%3 == 1){
            n = n/3 + 1;
        }
        else if (n%3 == 2){
            n = n/3 + 2;
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