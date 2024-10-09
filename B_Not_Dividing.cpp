//https://codeforces.com/problemset/problem/1794/B
#include<iostream>
using namespace std; 
 
void solve()
{
	int n ; cin >> n ; 
	int a[n] , pre = 1 ;
	for(int &x:a)
	{
		cin >> x ; 
		if(x%pre==0)
			x++;
		if(x==1) x++;
		pre = x ; 
	}
	int pre2 = 1 ; 
	for(int x:a) 
	{
		if(x%pre==0)
			x++;
		pre = x ; 
		cout << x << " ";
	}
	cout << endl; 
}
int main()
{
	ios::sync_with_stdio(0); cin.tie(0);
	int t ; cin >> t ; while(t--) solve();
}