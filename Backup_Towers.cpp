#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define pii pair<int,int>
#define pll pair<long long, long long>

using namespace std;

void recur ()

void solve(){
    int r, c, n; cin >> r >> c >> n;
    int x, y;
    vector <int> m;
    vector <int> l;
    forn (n){
        cin >> x >> y;
        m.push_back(x-y);
        l.push_back(x+y);
    }
    
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t = 1;
    forn (t){
        solve();
    }

    return 0;
}