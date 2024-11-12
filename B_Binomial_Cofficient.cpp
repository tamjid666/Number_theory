#include<iostream>
using namespace std; 
const int M = 1e9 + 7 ;
#define ll long long 
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
ll bin_exp(int a,int b){
	ll res = 1 ; 
	while(b){
		if(b&1)
			res = binaryMultipication(res,a); 
		a = binaryMultipication(a,a); 
		b >>= 1 ; 
	}
	return res ; 
}
int main(){
	int t; cin >> t ; 
	int a[t] ; for(int &x:a) cin >> x ; 
	int k[t] ; for(int &x:k) cin >> x ; 

	for(int i=0; i<t; ++i){
		cout << bin_exp(2,k[i]) << endl ; 
	}
}