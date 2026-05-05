#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define pii pair<int,int>
#define pll pair<long long, long long>

using namespace std;

void solve(){
    int n; cin >> n;
    vector<int>v;
    int a;
    int max = -INT32_MAX;
    int min = INT32_MAX;
    forn (n){
        cin >> a;
        if (a > max) max = a;
        if (a < min) min = a;
    }
    int x; cin >> x;

    if (x <= max && x >= min) cout << "YES";
    else cout << "NO";

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