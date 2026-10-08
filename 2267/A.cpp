#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define pii pair<int,int>
#define pll pair<long long, long long>

using namespace std;

void solve(){
    string s;
    int n;
    char c; cin >> n >> c;

    cin >> s;

    int sum = 0;

    for (int i = 0; i < s.size()/2; i++){
        if (s[i] != s[s.size()- i-1] ){
            if (s[i] != c && s[s.size()-i-1] != c) sum ++;
            sum ++;
        }
    }
    cout << sum << '\n';

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