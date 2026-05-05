#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define pii pair<int,int>
#define pll pair<long long, long long>

using namespace std;

void solve(){
    string s; cin >> s;
    set<int> arr[26];
    forn (s.size()) {
        arr[s[i]-'a'].insert(i);
    }

    int a; cin >> a;
    forn (a) {
        int q; cin >> q;
        if (q == 1){
            int n; cin >> n;
            --n;
            char c; cin >> c;
            arr[s[n] - 'a'].erase(n);
            s[n] = c;
            arr[c-'a'].insert(n);
        }
        else{
            int l, r; cin >> l >> r;
            int sum = 0;
            --l;
            --r;
            for (int j = 0; j<26; j++){
                auto it = arr[j].lower_bound(l);
                if (it != arr[j].end() && *it <= r){
                    sum++;
                }
            }
            cout << sum << '\n';
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t=1;
    forn (t){
        solve();
    }

    return 0;
}