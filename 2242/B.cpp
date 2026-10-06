//Solved
/*
1. iterate right to left keep track of difference in three to two and one
2. iterate right to left, check when first condition of one greater is reached then the max diff of threes
*/
#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define pii pair<int,int>
#define pll pair<long long, long long>


using namespace std;


void solve(){
    int n; cin >> n;
    int arr [n];
    int o = 0, t = 0;
    forn (n) {
        cin >> arr[i];
        if (arr[i] == 1) o++;
        else if (arr[i] == 2) t++;
    }


    int lo = 0;
    bool ans = false;
    int three[n];

    int diff = 0;
    forn (n){
        if (arr[n-1-i] == 3){
            diff--;
        }
        else diff++;

        if (i != 0){
            three[n-1-i] = three[n-i] < diff ? three[n-i] : diff;
        }
        else {
            three[n-1-i] = diff;
        }
        
    }

    forn (n-2) {
        if (arr[i] == 1) {
            lo++;
            o--;
        }
        else if (arr[i] == 2) t--;

        if (lo >= (i+1-lo)){
            if (t+o >= n-i-1-t-o+three[i+2]) {
                ans = true;
                break;
            }
        }
    }
    if (ans) cout << "YES";
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