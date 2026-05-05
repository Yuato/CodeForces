#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define pii pair<int,int>
#define pll pair<long long, long long>

using namespace std;

void solve(){
    int n, a; cin >> n >> a;
    int x; 
    int l = 0, g = 0;
    forn (n){
        cin >> x;
        if (a > x) l++;
        if (a < x) g++;
    }
    if (g > l) cout << a+1;
    else cout << a-1;
    cout <<'\n';
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