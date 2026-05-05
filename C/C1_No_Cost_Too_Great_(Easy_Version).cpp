#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define pii pair<int,int>
#define pll pair<long long, long long>

using namespace std;

void solve(){
    int n;
    vector<int>a;
    vector<int>b;
    int l;

    int arr[300000];
    forn (300000){
        arr[i] = 0;
    }

    int count = 0;
    forn (n){
        cin >> l;
        if (l > 1){
            for (int j = l; j < 300000; j += l){
                arr[i] = 1;
            }
            count += 1;
        }
        a.push_back(l);
    }
    forn (n){
        cin >> l;
        b.push_back(l);
    }
    
    forn (n){

    }

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