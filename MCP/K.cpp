#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define pii pair<int,int>
#define pll pair<long long, long long>

using namespace std;

int query(int i, int j){
    int a;
    cout << '?' << " " << i << " " << j << endl;
    cin >> a;
    return a;
}

void solve(int i, int j){
    int a = query(i-1, j);
    if (a == 1){
        if (query(i-1, j-1)){
            cout<<'!'<< " " << i-1 << " " << j-1;
        }
        else{
            cout<<'!'<< " " << i-1 << " " << j;
        }
    }
    else{
        if (query(i, j-1)){
            cout<<'!'<< " " << i << " " << j-1;
        }
        else{
            cout<<'!'<< " " << i << " " << j;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int a;

    a = query (2, 2);
    if (a) solve(2, 2);

    else if (query(4, 4)) solve (4, 4);

    else if (query(2, 4)) solve(2, 4);

    else solve (4, 2);

    return 0;
}