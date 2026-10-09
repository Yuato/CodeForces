//Solved
#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define pii pair<int,int>
#define pll pair<long long, long long>

using namespace std;

void solve() {
    int n; cin >> n;
    char a; 

    bool arr[n+1];

    forn (n+1){
        arr[i] = false;
    }

    stack <int> doc;
    forn (n) {
        cin >> a;
        if (a == '1'){
            doc.push(i+1);
        }
        else if (a == '2'){
            if (!doc.empty()){
                int x = doc.top();
                doc.pop();
                arr[x] = true;
            }
            else{
                arr[i+1] = true;
            }
        }
        else{
            arr[i+1] = true;
        }
    }
    int k = 0;
    forn (n){
        if (!arr[i+1]){
            ++k;
        }
    }
    cout << k;
    cout << '\n';
    forn (n){
        if (!arr[i+1]){
            cout << i + 1 << " ";
        }
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