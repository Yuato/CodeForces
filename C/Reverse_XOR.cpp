#include <bits/stdc++.h>
#include <algorithm>
#define forn(n) for (int i = 0; i < n; i++)
#define pii pair<int,int>
#define pll pair<long long, long long>

using namespace std;

void solve(){
    int n; cin >> n;
    string s;
    while (true){
        if (n%2) s = '1' + s;
        else s = '0' + s;
        if (n == 0) break;
        n /= 2;
    }
    bool ans = false;
    string s1 = s.substr(0,s.size()/2);
    string s2 = s.substr((s.size()+1)/2, s.size()/2);
    reverse(s2.begin(), s2.end());
    if (s1 == s2) ans = true;
    
    s  =  s.substr(1,s.size()-1);
    s1 = s.substr(0,(s.size())/2);
    s2 = s.substr((s.size()+1)/2, (s.size())/2);
    if (s1 == s2) ans = true;

    if (ans) cout << "YES";
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