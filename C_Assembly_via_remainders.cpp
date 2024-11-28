//https://codeforces.com/contest/1968/problem/C
#include<bits/stdc++.h>
using namespace std; 

void solve(){
	int n ; cin >> n ; int a[n-1] ; 
	int mx = 0 ; 
	for(int &x:a){ cin >> x ; mx = max(mx,x);} 

	for(int i=0; i<n; ++i){
		int pre ;
		if(!i) { pre = mx+1;cout << mx+1 << " " ;} 
		else { cout << pre+a[i-1] << " " ; pre =pre+a[i-1];}
	}
	cout << endl ; 
}
int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	int t ; cin >> t ; while(t--) solve();
}