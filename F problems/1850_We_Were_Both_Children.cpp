//TLE - Test 9 (Codeforces)
#include <bits/stdc++.h>

using namespace std;

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    int arr[400000];

    for (int i = 0; i < t; i++){
        int n; cin >> n;
        
        for (int j = 0; j < n+1; j++){
            arr[j] = 0;
        }

        int a;
        int max = 0;
        for (int j = 0; j<n; j++){
            cin >> a;
            for (int z = a; z<n+1; z=z+a){
                arr[z]++;
            }
        }

        for (int j = 0; j < n+1; j++){
            if (arr[j] > max) max = arr[j];
        }

        cout << max;
        if (i + 1 != t) cout << '\n';
    }
}