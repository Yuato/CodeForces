// Solved
/*
solution:
    - find the difference between the elements of b in order
    - If the difference is the greater than the current index (by 1 max) then a new element has appeared
    - If not, then we find the element that occured difference before the current index element in {ans}
*/
#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define pii pair<int,int>
#define pll pair<long long, long long>

using namespace std;

void solve(){
    int n; cin >> n;
    long long a; long long k;
    vector<int>b;
    forn (n) {
        k = a;
        cin >> a;
        if (i > 0){
            b.push_back(a-k);
        }
    }
    vector<long long>ans;
    int num = 2;
    ans.push_back(1);
    forn (n-1){
        if (b[i]>ans.size()){
            ans.push_back(num);
            num++;
        }
        else{
            ans.push_back(ans[i-b[i]+1]);
        }
    }
    forn (n){
        cout << ans[i] << " ";
    }
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