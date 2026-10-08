#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define pii pair<int,int>
#define pll pair<long long, long long>

/*
1. Sort array, upper_bound to find index, then 0 to index is range of lower or equal values
*/

using namespace std;


void solve(){
    int a,b; cin >> a >> b;
    long long c;

    vector<long long> A,B;
    forn (a){
        cin >> c;
        A.push_back(c);
    }
    sort(A.begin(), A.end());

    vector<long long>::iterator it ;
    
    forn (b){
        cin >> c;
        it = upper_bound(A.begin(),A.end(),c);
        cout << it - A.begin() << " ";
    }
    
    
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t=1;
    forn (t){
        solve();
    }

    return 0;
}