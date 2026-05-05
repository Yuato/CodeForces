#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define pii pair<int,int>
#define pll pair<long long, long long>
 
using namespace std;

 
void solve(){
    long long n, k; cin >> n >> k;
    int count = 0;
    int ans = -1;
    int next = n;
    bool odd = false;

    while (n > 0){
        if (n == k) {
            ans = count;
            break;
        }
        if (odd && n+1 == k){
            ans = count;
            break;
        }

        if (n % 2 == 1){
            odd = true;
            n  = n/2;
        }
        else{
            n = n/2;
        }

        count ++;
        
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