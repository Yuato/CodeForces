#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define pii pair<int,int>
#define pll pair<long long, long long>

using namespace std;

void solve(){
    int n; cin >> n;
    vector <long long> v;

    long long a;
    forn (n) {
        cin >> a;
        v.push_back(a);
    }
    
    vector<long long>sz;
    int l = 0, r = 0;
    while (true){
        if (l == n-1){
            sz.push_back(1);
            break;
        }
        else if (r+1<n&&v[r+1]>=r-l+2){
            r++;
        }
        else if (l == r){
            sz.push_back(1);
            l++;
            r++;
        }
        else{
            sz.push_back(r-l+1);
            l++;
        }
    }

    long long ans = 0;
    for (int i = 0; i < sz.size(); i++){
        ans+=sz[i];
    }
    cout << ans << '\n';
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