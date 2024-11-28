//https://codeforces.com/problemset/problem/1900/B
#include<iostream>
using namespace std; 

void solve()
{
	int a , b , c ; cin >> a >> b >> c ; 
	int a1=1,b1=1,c1=1 ;
	if(abs(b-c)&1) a1=0; 
	if(abs(a-c)&1) b1=0;
	if(abs(a-b&1)) c1=0;
	cout << a1 << " " << b1 << " " << c1 << endl;  
}
int main()
{
	ios::sync_with_stdio(0); cin.tie(0);
	int t; (cin>>t) ; while(t--) solve(); 

}