#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define pii pair<int,int>
#define pll pair<long long, long long>

using namespace std;

void solve(){
    int n; cin >>n;
    string s; cin >> s;
    string c; cin >> c;
    map <char, int> m;
    forn (26){
        m[char(i+'a')] = 0;
    }
    forn (n){
        m[s[i]] = m[s[i]] + 1;
        m[c[i]] = m[c[i]] - 1;
    }

    bool yes = true;
    forn (26){
        if (m[char(i+'a')]){
            yes = false;
            break;
        }
    }
    if (yes) cout << "YES";
    else cout << "NO";
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