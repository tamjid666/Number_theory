#include<iostream>
#define ll long long
using namespace std; 
const ll M = 1e18;
//a = 1e18 

ll binaryMultipication(ll a,ll b)
{
	int ans = 0 ; 
	while(b)
	{
		if(b&1) ans = (ans+a) % M ;
		a = (a+a) % M;
		b >>= 1 ; 
	}
	return ans ;
}
int binaryExp(ll a,int b )
{
	ll ans = 1 ; 
	while(b)
	{
		// if(b&1) ans = (ans*a) % M; // ans * a -> 1e18 * 1e18 -> 1e36 impossible to store in ll
		if(b&1) ans = binaryMultipication(a,ans);
		// a *= a ;//a * a -> 1e18 * 1e18 -> 1e36 impossible to store in ll 
		a = binaryMultipication(a,a);
		b >>= 1; 
	}
	return ans ; 
}

int main()
{
	cout << binaryExp(2,3) << endl ; 
}