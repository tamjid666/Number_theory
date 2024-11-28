//https://codeforces.com/problemset/problem/1828/B
#include<iostream>
using namespace std; 

int gcd(int a,int b)
{
	if(b==0) return a ; 
	return gcd(b,a%b) ;
}
void solve()
{
	int n ;cin >> n ; 
	int a[n] , ans = 0; 
	for(int i=1; i<=n; ++i) {
		cin >> a[i-1] ;
		ans = gcd(ans,abs(a[i-1]-i)) ;
	} 
	cout << ans << endl ;
}
int main()
{
	ios::sync_with_stdio(0);cin.tie(0);
	int t ; cin >> t ; while(t--) solve(); 
}