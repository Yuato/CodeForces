/*
Solved (checked with CodeForces)
Solution:
Prefix sum array {arr} with 'a' = 1, and 'b' = -1;
The last element of the sum array is the target {find}
Keep a map {m} that stores the latest index occurence of a prefix sum
While iterating through the array:
    - Update the map 
    - find the closest index occurence of a prefix sum which is neccessary to get target from the current index's prefix sum
    - Update  minimum {ans} if this new range is less than the minimum
*/
#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define pii pair<int,int>
#define pll pair<long long, long long>

using namespace std;

void solve() {
    int n;
    string str;
    cin >> n >> str;

    map <int, int> m;
    int arr [n], val = 0;
    forn(n) {
        if (str[i] == 'a') val++;
        else val--;
        arr[i] = val;
    }

    int find = arr[n-1];
    int ans = n;
    int l;
    m[0] = -1;
    forn(n){
        m[arr[i]] = i;
        if (m.count(arr[i] - find)) ans = min (ans, i - m[arr[i] - find]);
    }
    cout << (ans == n ? -1 : ans) << '\n'; 
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