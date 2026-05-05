#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define pii pair<int,int>
#define pll pair<long long, long long>

using namespace std;

void solve(){
    int n; cin >> n;

    int a;
    map <int,int> m;
    forn (n){
        cin >> a;
        m[a] = i;
    }

    vector <pii> v;
    int num; cin >> num;
    int count = 1;

    bool poss = true;
    forn (n-1){
        cin >> a;
        if (a != num){
            if (m[a] < m[num]){
                poss = false;
            }
            else{
                num = a;
            }
        }
    }

    if (poss) cout << "YES";
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