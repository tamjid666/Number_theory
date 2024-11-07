//https://codeforces.com/contest/1516/problem/B
#include<bits/stdc++.h>
using namespace std; 
#define ll long long 

void solve(){
		ll n ; cin >> n ;
		ll a[n]; 
		ll res = 0 ; 
		for(ll &x:a){
			cin >> x ;
			res ^= x ;  
		}
		if(!res)
			cout << "YES\n" ;
		else{
			// 5 1 4 5 --> 5
			// 5 5 5 5 
			int k=0; 
			int cnt = 0 ; 
			for(int i=0; i<n; ++i){
				k^=a[i]; 
				if(k==res){
					k=0; 
					cnt++;
				}
			}
			cout << (cnt>2?"YES\n":"NO\n") ; 
		}
		/*ll val = a[0] ; 
		if(n&1){
			ll cnt = count(a,a+n,val); 
			if(cnt==n){cout << "YES\n"; return ; } 
		}
		cout << (res?"NO\n":"YES\n") ;*/ 
}
int main(){
	int t ; cin >> t ; while(t--){
		solve();
	}
}