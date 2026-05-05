#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define pii pair<int,int>
#define pll pair<long long, long long>

using namespace std;

void solve(){
    int n, x, y; 
    cin >> n >> x >> y;
    string s; cin >> s;
    int eight = 0, four = 0;
    x = abs(x);
    y = abs(y);

    for (char c: s){
        if (c == '4'){
            four++;
        }
        else eight++;
    }

    int e = 0;
    if (n-x >= 0 && n-y >=0){
        e = max(0, four - (n-x));
        if (y<=(n-e)){
            cout << "YES";
        } 
        else {
            cout << "NO";
        }
    }
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