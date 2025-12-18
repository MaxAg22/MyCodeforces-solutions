#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int n; cin>>n;
    vector<ll> nums(n), psums(n+1);
    for(auto& i:nums) cin>>i;

    psums[0] = 0;
    
    for(int i = 1; i<n+1; ++i){
        psums[i] = nums[i-1] + psums[i-1];
    }

    ll res = nums[0], prevmin = 0;
    for(int i = 1; i<n+1; ++i){
        prevmin = min(prevmin, psums[i]);
        res = max(res, psums[i] - prevmin);
    }
    cout << res << "\n";

    return 0;
}