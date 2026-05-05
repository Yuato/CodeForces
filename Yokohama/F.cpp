#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define pii pair<int,int>
#define pll pair<long long, long long>

using namespace std;

void solve(){
    long long n, q; cin >> n >> q;
    string s;
    long long a;
    map <int, int> row;
    map <int, int> col;
    int r = n, c = n;
    forn (n+1){
        row[i] = 0;
        col[i] = 0;
    }
    long long area = n*n;
    forn (q) {
        cin >> s >> a;
        if (s == "ROW"){
            if (a == 1){
                if (n > 1){
                    if (row[2] == row[1]){
                        area -= c;
                        r--;
                    }
                    else {
                        area += c; 
                        r++;
                    }
                }
                else{
                    area  = 1;
                }
            }
            else if (a == n){
                if (row[a] == row[a-1]){
                    area -= c;
                    r--; 
                }
                else {
                    area += c; 
                    r++;
                }
            }
            else{
                if (row[a] == row[a-1]){
                    area -= c;
                    r--; 
                }
                else {
                    area += c;
                    r++; 
                }
                if (row[a] == row[a+1]){
                    area -= c;
                    r--; 
                }
                else {
                    area += c;
                    r++; 
                }
            }
            row[a] = (row[a]+1)%2;
        }
        else{
            if (a == 1){
                if (n > 1){
                    if (col[2] == col[1]){
                        area -= r;
                        c--;
                    }
                    else {
                        area += r; 
                        c++;
                    }
                }
                else{
                    area = 1;
                }
            }
            else if (a  == n){
                if (col[a] == col[a-1]){
                    area -= r;
                    c--; 
                }
                else {
                    area += r; 
                    c++;
                }
            }
            else{
                if (col[a] == col[a-1]){
                    area -= r;
                    c--; 
                }
                else {
                    area += r;
                    c++; 
                }
                if (col[a] == col[a+1]){
                    area -= r;
                    c--; 
                }
                else {
                    area += r;
                    c++; 
                }
            }
            col[a] = (col[a]+1)%2;
        }
        cout << area <<'\n';
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    solve();

    return 0;
}