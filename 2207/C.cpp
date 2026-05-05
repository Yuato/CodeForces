#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define pii pair<int,int>
#define pll pair<long long, long long>

using namespace std;

void solve(){
    long long n, h; cin >> n >> h;
    long long v[n];
    forn(n) {
        cin >> v[i];
    }

    long long sum = 0;
    long long great = 0;
    int col = 0;
    long long max = 0;
    forn(n) {
        sum = 0;
        sum += (h - v[i]);
        max = v[i];
        for (int j = i+1; j < n; j++){
            if (v[j] > max){
                sum += (h - v[j]);
                max = v[j];
            }
            else{
                sum += (h - max);
            }
        }
        max = v[i];
        for (int j = i-1; j >= 0; j--){
            if (v[j] > max){
                sum += (h - v[j]);
                max = v[j];
            }
            else{
                sum += (h - max);
            }
        }
        if (sum > great){
            great = sum;
            col = i;
        }
    }

    long long drain[n];
    max = v[col];
    drain[col] = 0;
    for (int j = col+1; j < n; j++){
        if (v[j] > max){
            drain[j] = 0;
            max = v[j];
        }
        else{
            drain[j] = max-v[j];
        }
    }
    max = v[col];
    for (int j = col-1; j >= 0; j--){
        if (v[j] > max){
            drain[j] = 0;
            max = v[j];
        }
        else{
            drain[j] = max-v[j];
        }
    }
    
    long long great2 = 0;
    forn(n) {
        sum = 0;
        sum += drain[i];
        max = v[i];
        for (int j = i+1; j < n; j++){
            if (v[j] > max){
                sum += drain[j];
                max = v[j];
            }
            else{
                long long h = (drain[j] - (max-v[j]));
                if (h > 0){
                    sum += h;
                }
            }
        }
        max = v[i];
        for (int j = i-1; j >= 0; j--){
            if (v[j] > max){
                sum += drain[j];
                max = v[j];
            }
            else{
                long long h = (drain[j] - (max-v[j]));
                if (h > 0){
                    sum += h;
                }
            }
        }
        if (sum > great2){
            great2 = sum;
            col = i;
        }
    }

    cout << great + great2 << '\n';

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