#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define pii pair<int,int>
#define pll pair<long long, long long>

using namespace std;

void solve(){
    int n; cin >> n;
    vector <int> v;
    int a;
    forn(n) {
        cin >> a;
        v.push_back(a);
    }

    bool even = false;
    int x, y;
    forn(n){
        for (int j = i+1; j < n; j++){
            if ((v[j]%v[i])%2==0){
                even = true;
                x = v[i];
                y = v[j];
                break;
            }
        }
        if (even) break;
    }

    if (even) cout << x << ' ' << y;
    else cout << -1;
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