#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define pii pair<int,int>
#define pll pair<long long, long long>

using namespace std;

void solve(){
    int n, k; cin >> n >> k;
    int a;
    vector <int> v;
    forn (n){
        cin >> a;
        v.push_back(a);
    }
    sort(v.begin(), v.end());
    int ans = 1;
    int e = 0;
    forn (k+1){
        for (int z = 1; z <= sqrt(v[i]); z++){
            if (v[i] % z == 0){
                //testing v[i]/z
                e = k-i;
                a = v[i] / z;
                for (int j = i+1; j < n; j++){
                    if (v[j] % a != 0 && v[j] >= 3){
                        if ((v[j])/a < 4){
                            e--;
                        }
                    }
                    if (e < 0){
                        break;
                    }
                }
                if (e >= 0){
                    ans = max(ans,a);
                }
                //testing z
                e = k-i;
                a = z;
                for (int j = i+1; j < n; j++){
                    if (v[j] % a != 0 && v[j] >= 3){
                        if ((v[j])/a < 4){
                            e--;
                        }
                    }
                    if (e < 0){
                        break;
                    }
                }
                if (e >= 0){
                    ans = max(ans,a);
                }
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