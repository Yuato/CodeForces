#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define pii pair<int,int>
#define pll pair<long long, long long>

using namespace std;

long long gcd(long long a, long long b){
    a = a%b;
    if (a == 0){
        return b;
    }
    else{
        return gcd(b,a);
    }
}

void solve(){
    long long n; cin >> n;
    long long a[n];
    forn (n) {
        cin >> a[i];
    }

    long long b[n];
    forn(n) {
        cin >> b[i];
    }

    long long g1;
    long long g2, g3;
    long long ans = 0;
    for(int i = 0; i < n; i++){
        if (i < n-1 && i > 0){
            g1 = gcd(a[i],a[i+1]);
            g2 = gcd(a[i-1],a[i]);
            g3 = gcd(g1,g2);
            if (g3 == min(g1,g2) && max(g1,g2) < a[i]){
                ans++;
            }
            else if (a[i] > g1*g2/g3){
                ans++;
            }
        }
        else if (i == n-1){
            g2 = gcd(a[i-1],a[i]);
            if (g2 < a[i]){
                ans++;
            }
        }
        else if (i == 0){
            g1 = gcd(a[i],a[i+1]);
            if (g1 < a[i]){
                ans++;
            }
        }
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