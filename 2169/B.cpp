#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define pii pair<int,int>
#define pll pair<long long, long long>

using namespace std;

void solve(){
    string s; cin >> s;
    bool r = false;
    bool a = false;
    int pl = 0, pr = 0;
    bool inf = false;
    bool once = false;
    forn (s.size()){
        if (s[i] == '>') {
            r = true;
            if (!once){
                pl = i-1;
                pr = i;
                if (a) pr--;
                once = true;
            }
        }

        else if (s[i] == '<' && r) inf = true;

        if (s[i] == '<' && a) inf = true;

        if (i+1 < s.size() && s[i] == '>' && s[i+1] == '*') inf = true;

        if (s[i] == '*'){
            if (a) inf = true;
            else a = true;
        }
        else a = false;
    }
    if (inf) cout << -1;
    else cout << max(pl+1, int(s.size())-pr);
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