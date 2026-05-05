#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define pii pair<int,int>
#define pll pair<long long, long long>

using namespace std;

void solve(){
    int n; cin >> n;
    double k;
    vector<double> team;
    vector <double> ind;
    double sum = 0, sumi = 0;
    double ans = 0, avg = 0;
    forn (n) {
        cin >> k;
        team.push_back(k);
    }
    forn (n) {
        cin >> k;
        ind.push_back(k);
    }

    sort(ind.begin(), ind.end());
    forn (n) {
        sumi += ind[n-i-1];
        sum = (team[i] + sumi);
        avg = sum/(i+1);
        ans = max(ans, avg);
    }
    cout << fixed << ans;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t = 1;
    forn (t){
        solve();
    }

    return 0;
}