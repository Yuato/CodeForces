#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define pii pair<int,int>
#define pll pair<long long, long long>

using namespace std;

void solve(){
    int n; cin >> n;
    vector <pii> v;

    char a;
    forn(n) {
        for (int j = 0; j < n; j++){
            cin >> a;
            if (a == '#'){
                v.push_back(pair(i,j));
            }
        }
    }

    bool adj [4];
    bool direction [8];
    int ver = 0, hor = 0;
    string ans = "YES";
    forn (v.size()){
        for (int j = 0; j<4; j++){
            adj[j] = false;
            direction[j+4] = false;
            direction[j] = false;
        }
        for (int j = 0; j<v.size(); j++){
            ver = v[j].first - v[i].first;
            hor = v[j].second - v[i].second;
            if (abs(abs(hor)-abs(ver)) == 1){
                //Top
                if (ver > 0 && abs(hor)<abs(ver)){
                    adj[0] = true;
                    if (hor < 0){
                        direction[7] = true;
                        if (adj[3]) ans = "NO";
                        if (direction[0]) ans = "NO";
                    }
                    else if (hor > 0){
                        direction[0] = true;
                        if (adj[1]) ans = "NO";
                        if (direction[7]) ans = "NO";
                    }
                    if (direction[1] || direction[6]) ans = "NO";
                }
                //Bottom
                if (ver < 0 && abs(hor)<abs(ver)){
                    adj[2] = true;
                    if (hor < 0){
                        direction[4] = true;
                        if (adj[3]) ans = "NO";
                        if (direction[3]) ans = "NO";
                    }
                    else if (hor > 0){
                        direction[3] = true;
                        if (adj[1]) ans = "NO";
                        if (direction[4]) ans = "NO";
                    }
                    if (direction[5] || direction[2]) ans = "NO";
                }
                //right
                if (hor > 0 && abs(ver)<abs(hor)){
                    adj[1] = true;
                    if (ver < 0){
                        direction[2] = true;
                        if (adj[2]) ans = "NO";
                        if (direction[1]) ans = "NO";
                    }
                    else if (ver > 0){
                        direction[1] = true;
                        if (adj[0]) ans = "NO";
                        if (direction[2]) ans = "NO";
                    }
                    if (direction[3] || direction[0]) ans = "NO";
                }
                //left
                if (hor < 0 && abs(ver)<abs(hor)){
                    adj[3] = true;
                    if (ver < 0){
                        direction[5] = true;
                        if (adj[2]) ans = "NO";
                        if (direction[6]) ans = "NO";
                    }
                    else if (ver > 0){
                        direction[6] = true;
                        if (adj[0]) ans = "NO";
                        if (direction[5]) ans = "NO";
                    }
                    if (direction[4] || direction[7]) ans = "NO";
                }
            }
            else if (abs(abs(hor)-abs(ver)) > 1){
                ans = "NO";
                break;
            }
        }
        if (ans == "NO"){
            break;
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