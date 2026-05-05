/*
Solved (checked with CodeForces)
Solution:
1. Maintain a dictionary {f} that keeps track of every element that has appeared from 1-n
2. Keep track of the number of times {num} our MEX (minimum excluded) value {k} occurs
3. If number of times mex appears is greater than the amount of values between 1-k that hasn't appeared {r}:
    - Return num
    - Otherwise return k
    - (This works because if {num} >= {r}, we can substitute our {num} for the unappear numbers and we still need to change the rest of the nums
    - If {r} >= {num}, we can return r as we can use our MEX values in the array to suppliment r, but we still need to fill all of r)
*/
#include <bits/stdc++.h>

using namespace std;

#include <bits/stdc++.h>
 
using namespace std;
 
void solve (){
    int n, k;
    cin >> n >> k;
 
    int a, num = 0;
    map <int, bool> f;
 
    for (int i = 0; i < k; i++){
        f[i] = false;
    }
    
    for (int i = 0; i < n; i++){
        cin >> a;
        if (a == k){
            num++;
        }
        f[a] = true;
    }
 
    int r = 0;
    for (int i = 0; i < k; i++){
        if (!f[i]) r++;
    }
 
    cout << (num >= r ? num : r) << '\n';
}
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t;
    for (int i = 0; i < t; i++){
        solve();
    }
}