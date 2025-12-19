#include <bits/stdc++.h>
#include <cassert>
using namespace std;
typedef long long ll;

int main(){
    ios::sync_with_stdio(0); 
    cin.tie(0); 
    cout.tie(0); 
    
    // Stone's number
    int n; cin >> n;
    vector<ll> stones(n), sort_stones(n), stones_cost(n+1), ordered_stones_cost(n+1);
    
    // Stone's values
    for(auto& i:stones) cin >> i;

    // Ordered array of stone's values
    sort_stones = stones;
    sort(sort_stones.begin(), sort_stones.end());

    // Sum of stone's values
    stones_cost[0] = 0;
    for(int i = 1; i<n+1; ++i){
        stones_cost[i] = stones[i-1] + stones_cost[i-1];
    }

    // Sum of ordered stone's values
    ordered_stones_cost[0] = 0;
    for(int i = 1; i<n+1; ++i){
        ordered_stones_cost[i] = sort_stones[i-1] + ordered_stones_cost[i-1];
    }

    // Question's number
    int m; cin >> m;

    // Answer questions
    for(int i = 0; i < m; ++i){
        int type, l, r; cin >> type >> l >> r;
        assert(type == 1 || type == 2);
        assert(1 <= l && l <= r && r <= n);
        // Answer 1 
        if (type == 1) {
            cout << stones_cost[r] - stones_cost[l-1] << "\n";
        // Answer 2
        } else if (type == 2) {
            cout << ordered_stones_cost[r] - ordered_stones_cost[l-1] << "\n";
        }
    }

    return 0;
}