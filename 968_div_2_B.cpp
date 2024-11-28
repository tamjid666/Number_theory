#include<bits/stdc++.h>
using namespace std; 

void solve()
{
	int n ; cin >> n ; 
	vector<int> a(n);
	for(int &x:a) cin >> x ; 
	sort(a.begin(),a.end());

	cout << a[n/2] << endl ; 
}
int main()
{
	ios::sync_with_stdio(0);cin.tie(0);
	int t ; cin >> t ; while(t--) solve();
}