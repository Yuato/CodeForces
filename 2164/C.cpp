#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define pii pair<int,int>
#define pll pair<long long, long long>

using namespace std;

void solve(){
    int n; cin >> n;
    int m; cin >> m;

    vector<int>s;
    vector<int>h;
    vector<int>c;

    int a;
    int max = 0;
    forn(n) {
        cin >> a;
        s.push_back(a);
    }

    sort(s.begin(), s.end());
    max = s[n-1];

    forn(m) {
        cin >> a;
        h.push_back(a);
    }

    forn(m) {
        cin >> a;
        c.push_back(a);
    }


    forn(n) {
        for (int j = 0; j < h.size(); j++){
            if (s[i] >= h[j] && ){
                h.erase(h.begin()+j);
                break;
            }
        }
    }
    cout << m - h.size() << '\n';
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