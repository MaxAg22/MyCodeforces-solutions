#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int n, k; cin>>n>>k;
    vector<ll> nums(n), psums(n+1);
    for(auto& i:nums) cin>>i;

    psums[0] = 0;
    
    for(int i = 1; i<n+1; ++i){
        psums[i] = nums[i-1] + psums[i-1];
    }

    int res = 0;
    ll prevmin = LLONG_MAX; 
    for(int i = 0; i<=n-k; ++i){
        int new_min = psums[i+k] - psums[i];
        if(new_min < prevmin) {
            res = ++i;
            prevmin = new_min; 
        }
    }
    cout << res << "\n";

    return 0;
}