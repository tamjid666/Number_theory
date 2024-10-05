#include<bits/stdc++.h>
using namespace std; 
#define ll long long 

void solve()
{
	ll n , k , x ; cin >> n >> k >> x ;
	/* x must be between min and max sum of 1 to n 
		min n = k ; 
		max n = n-k
	*/ 

	bool f = ((k*(k+1)/2) <= x && ((n*(n+1)/2)-((n-k)*(n-k+1)/2)) >= x ); 
	
	cout << ( f ? "YES\n" : "NO\n");
}
int main()
{
	int t ; cin >> t ; while(t--){solve();}
}