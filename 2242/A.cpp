//Solved
/*
1. three+ of one or two of two+ works
*/
#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define pii pair<int,int>
#define pll pair<long long, long long>


using namespace std;


void solve(){
    int n; cin >> n;
    int two = 0, three = 0;
    long long a;
    forn (n){
        cin >> a;
        if (a >= 3){
            three ++;
        }
        else if (a >= 2){
            two ++;
        }
    }
    if (three > 0){
        cout << "YES";
    }
    else if (three+two > 1){
        cout << "YES";
    }
    else cout << "NO";
    cout << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin>>t;
    forn (t){
        solve();
    }

    return 0;
}