/*#include<bits/stdc++.h>
#include <cstdlib>
using namespace std; 

int binary_exp(int a,int b){
	int ans = 1 ;
	while(b){
		if(b&1)
			ans *= a ;
		a *= a ;
		b >>=1 ;  
	}
	return ans ; 
}
void solve(){
	int n ; cin >> n ;
	vector<int> v ; 
	int ans = -1 ;
	for(int i=0; i<(1<<n); ++i){
		string s ; 
		int index = i ; 
		for(int j=0; j<n; ++j){
			if(index&1)
				s.push_back('6');
			else
				s.push_back('3');
			index >>= 1 ; 
		}
		int number = atoi(s.c_str());
		v.push_back(number); 
		// if(number%66==0) {ans = number; break ;} 
	}
	sort(v.begin(),v.end());
	for(int i=0; i<(1<<n); ++i){
		if(v[i]%66==0){
			ans = v[i];
			break;
		}
	}
	cout << ans << endl ; 
}
int main(){
	int t ; cin >> t ; while(t--) solve(); 
}*/
#include<iostream>
#include<cstdlib>
using namespace std; 

void solve(){
	int n ; cin >> n ; 
		string s(n,'3') ; 
		s[n-1] = s[n-2] = '6' ; 
		if(n<4 && n!=2) {cout << -1 << endl ; return ; } 
		if(n&1) s[n-4] = '6' ; 
		
		cout << s << endl ;
}
int main(){
	int t ; cin >> t ; while(t--)solve() ;
}