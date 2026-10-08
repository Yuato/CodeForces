#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define pii pair<int,int>
#define pll pair<long long, long long>

/*
1. Array track all values (index 0-26) for number of each char
2. Change approach even vs odd, go from A to Z add 1 to lowest lexo if odd, then remove from highest
3. 
*/

using namespace std;


void solve(){
    string s; cin >> s;
    int arr [26];

    forn(26){
        arr[i] = 0;
    }

    for (auto i : s){
        arr[i-'a']++;
    }

    bool odd = s.size()%2;

    int left = 0, right = 25;
    char mid = 0;
    while (left <= right){
        while (arr[left]%2 == 0 && left < 26){
            ++left;
        }
        while (arr[right]%2 == 0 and right >= 0){
            --right;
        }
        if (left > right){
            break;
        }
        else if (left == right){
            mid = left+'a';
            break;
        }
        arr[left]++;
        arr[right]--;
    }
    
    forn (26){
        for (int j = 0; j < arr[i]/2; j++){
            cout << char(i+'a');
        }
    }
    if (odd){
        cout << mid;
    }

    forn (26){
        for (int j = 0; j < arr[25-i]/2; j++){
            cout << char(25-i+'a');
        }
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