//Solved
/*
    1. Understand start from base bit will yield the greatest answer
    2. k * smallest bit subtract from n, repeated with bit * 2 after
    3. remainder find number of bits left, then that remainder assume adjustments can compensate
*/
#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define pii pair<int,int>
#define pll pair<long long, long long>


using namespace std;


void solve(){
    string S1, S2; cin >> S1 >> S2;
    int s1 [S1.size()];
    int s2 [S2.size()];
    int sum = 0;
    for (int i = 0; i < S1.size(); i++){
        sum += S1[i]-'0';
        sum %= 10;
        s1[i] = sum;
    }
    sum = 0;
    for (int i = 0; i < S2.size(); i++){
        sum += S2[i]-'0';
        sum %= 10;
        s2[i] = sum;
    }

    int arr [S1.size()+2][S2.size()+2];
    for (int i = 0; i < S1.size()+2; i++){
        for (int j = 0; j < S2.size()+2; j++){
            arr[i][j] = 0;
        }
    }

    for (int i = 1; i < S1.size()+1; i++){
        for (int j = 1; j < S2.size()+1; j++){
            if (s1[i-1] == s2[j-1]){
                arr[i][j] = arr[i-1][j-1] + 1;
            }
            if (arr[i][j] < arr[i][j-1]){
                arr[i][j] = arr[i][j-1];
            }
            if (arr[i][j] < arr[i-1][j]){
                arr[i][j] = arr[i-1][j];
            }
        }
    }
    if (s1[S1.size()-1] == s2[S2.size()-1]) cout << arr[S1.size()][S2.size()];
    else cout << -1;

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