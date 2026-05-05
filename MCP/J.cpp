#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define pii pair<int,int>
#define pll pair<long long, long long>

using namespace std;

void solve(){
    vector <int> v; 
    int a;
    forn (100){
        cin >> a;
        v.push_back(a);
    }   
    int ans = v[v.size()-1]%10;
    if (ans == 0) ans = 10;
    cout << ans;
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