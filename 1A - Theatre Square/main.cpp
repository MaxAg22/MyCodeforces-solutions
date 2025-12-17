#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    long long n, m, a; 
    cin >> n >> m >> a;
    
    ll r1 = (n + a - 1) / a;
    ll r2 = (m + a - 1) / a;
    ll result = r1 * r2;

    cout << result << endl;

    return 0;
}