#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define pii pair<int,int>
#define pll pair<long long, long long>

using namespace std;

void solve(){
    char s [100];
    int n; cin >> n;
    forn(n) {
        cin >> s[i];
    }
    int maxOnes = 0;
    int minOnes = 0;

    forn(n) {
        if (s[i] == '1'){
            maxOnes += 1;
        }
    }
    for(int i = 1 ; i <n-1; i++){
        if (s[i-1] == '1' && s[i+1] == '1'){
            if (s[i] == '0'){
                maxOnes += 1;
                s[i] = '1';
            }
        }
    }

    minOnes = maxOnes;
    int count = 0;
    forn (n){
        if (s[i] == '1'){
            count++;
        }
        else {
            if (count > 2){
                minOnes -= (count-1)/2;
            }
            count = 0;
        }
    }
    if (count > 2){
        minOnes -= (count-1)/2;
    }
    cout << minOnes << " " << maxOnes << '\n';
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