#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define pii pair<int,int>
#define pll pair<long long, long long>

using namespace std;

void solve(){
    int n; cin >> n;
    char grid [2][n];
    forn(n){
        cin >> grid[0][i];
    }
    forn(n){
        cin >> grid[1][i];
    }

    int change = 0;
    forn (n){
        if (i == n-1){
            if (grid[0][i] != grid[1][i]){
                change++;
            }
        }
        else if (grid[0][i] != grid[1][i]){
            if (grid[0][i] != grid[0][i+1]){
                change += 1;
            }
            else{
                if (grid[1][i] != grid[1][i+1]){
                    change += 1;
                }
                i += 1;
            }
        }
    }
    cout << change << '\n';
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