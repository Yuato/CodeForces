#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define pii pair<int,int>
#define pll pair<long long, long long>

using namespace std;

void solve(){
    int a, b, c; cin >> a >> b >> c;
    
}

int main() {
    int n; cin >> n;
    if (n==1){
        cout << "walk";
    }
    else if (n == 2){
        cout << "no";
    }
    else if (n == 3){
        cout << "no";
    }
    else if (n == 4){
        cout << "no";
    }
    else if (n== 5){
        cout << "yes";
    }
    else if (n == 6){
        cout << "yes";
    }
    else if (n==7){
        cout << "backwards";
    }
    else{
        cout << 7;
    }
}