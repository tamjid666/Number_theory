//https://codeforces.com/problemset/problem/1794/A
#include<bits/stdc++.h>
using namespace std; 
void solve()
{
	int n ; cin >> n ;
	int l = 2*(n-1); 
	map<string,int> m ; 
	for(int i=0; i<l; ++i)
	{
		string s ; cin>> s; 
		sort(s.begin(),s.end());
		m[s]++;
	}
	bool f = true ; 
	for(auto x : m)
		if(x.second==1)
			{f=false ;break;}
	cout << (f?"YES":"NO") << endl;  
}
int main()
{
	ios::sync_with_stdio(0); cin.tie(0);
	int t ; cin >> t ; while(t--) solve(); 
}