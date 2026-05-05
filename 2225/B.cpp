#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define pii pair<int,int>
#define pll pair<long long, long long>

using namespace std;

void solve(){
    string t; cin >> t ;
    int arr [t.size()];

    int sum = 1;
    char swap;
    bool s = false;
    char curr = t[0];
    int strike = 0;
    for (int i = 1; i < t.size(); i++){
        if (curr == t[i]) {
            sum++;
        }
        if (curr != t[i] || i == t.size()-1){
            if (sum > 3){
                strike += 2;
            }
            else if (sum == 3){
                strike ++;
            }
            else if (sum == 2){
                if (s){
                    if (swap != curr){
                        strike += 1;
                        s = false;
                    }
                    else{
                        strike += 1;
                        s = false;
                    }
                }
                else{
                    s = true;
                    swap = curr;
                }
            }
            sum = 1;
        }
        curr = t[i];
    }

    if (s){
        strike ++;
    }

    if (strike <= 1){
        cout << "YES";
    }
    else cout << "NO";
    cout << '\n';
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