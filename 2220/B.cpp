#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define pii pair<int,int>
#define pll pair<long long, long long>

using namespace std;

void solve(){
    long long n, m; cin >> n >> m;
    long long len = 1;
    long long curr = 0;
    cin >> curr;
    long long a;
    bool ans = false;
    forn (n-1) {
        cin >> a;
        if (a == curr){
            len++;
        }
        else{
            curr = a;
            len = 1;
        }
        if (len >= m){
            ans = true;
        }
    }   
    if (ans) cout << "NO";
    else cout << "YES";
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