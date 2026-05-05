#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define pii pair<int,int>
#define pll pair<long long, long long>

using namespace std;

void solve(){
    int n, c; cin >> n >> c;
    double p, q; cin >> p >> q;
    string s; cin >> s;
    vector<int> correct;
    correct.push_back(0);
    

    int x = 0;
    forn (n){
        if (s[i] == 'Y'){
            x++;
        }
        correct.push_back(x);
    }

    int rank = 0;
    int ans = 0;
    for (int i = c; i < n+1; i++){
        for (int j = max (i - 2 * c, rank); j <= i-c; j++){
            if (((correct[i] - correct[j])/double(c)) >= p/q){
                ans++;
                rank = i;
                i += c - 1;
                break;
            }
        }
    }

    cout << ans;

}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    solve();

    return 0;
}