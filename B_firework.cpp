//https://codeforces.com/problemset/problem/1945/B
#include<iostream>
using namespace std; 
#define ll long long

int main()
{
	int t; cin >> t ; 
	while(t--)
	{
		ll a, b , m ; 
		cin >> a >> b >> m ; 
		cout << (m/a + m/b + 2) << endl ;  
	}
}