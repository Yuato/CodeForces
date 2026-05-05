//Not solved
#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define pii pair<int,int>
#define pll pair<long long, long long>

using namespace std;

void solve(){
    int n, k; cin >> n >> k;
    double x;
    vector<double>nums;
    forn (n){
        cin >> x;
        nums.push_back(x);
    }
    sort(nums.begin(), nums.end());
    double sum = 0;
    forn (k){
        sum += nums[i];
    }
    double avg = sum/k;
    double min = 0;
    double ans = INT32_MAX;
    int mid = k/2;
    for (int i = k; i<n; i++){
        sum -= nums[i-k];
        sum += nums [i];
        avg = sum/k;
        if (k%2 == 0){
            min = abs(avg-nums[i+mid]);
            min = min<abs(avg-nums[i+mid-1])?min : abs(avg-nums[i+mid-1]);
        }
        else{
            min = abs(avg-nums[i+mid]);
        }
        ans = ans < min ? ans : min;
    }
    cout << pow(ans, 2);
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t = 1;
    forn (t){
        solve();
    }

    return 0;
}