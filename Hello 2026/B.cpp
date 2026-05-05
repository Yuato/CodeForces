#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define pii pair<int,int>
#define pll pair<long long, long long>

using namespace std;

void solve(){
    int n, k; cin >> n >> k;
    vector <int> v (n);
    map <int, bool> hash;
    forn (n){
        cin >> v[i];
        hash[i] = false;
    }

    forn (n){
        hash[v[i]] = true;
    }

    int mex = -1;
    forn (k-1){
        if (!hash[i]) {
            mex = i;
            break;
        }
    }

    if (mex == -1) cout << k-1;
    else cout << mex;
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