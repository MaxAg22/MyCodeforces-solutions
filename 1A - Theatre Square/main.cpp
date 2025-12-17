#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n, m, a; 
    cin >> n >> m >> a;
    
    long long r1 = (n + a - 1) / a;
    long long r2 = (m + a - 1) / a;
    long long result = r1 * r2;

    cout << result << endl;

    return 0;
}