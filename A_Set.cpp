#include<iostream> 
using namespace std;

void solve() {
    int l, r, k;
    cin >> l >> r >> k;
    
    // Compute the largest valid `r` such that `r * k <= r`
    r = min(r, r / k);  
    // Ensure the range is valid
    cout << max(0, r - l + 1) << endl; 
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
