#include<bits/stdc++.h>
#define ll long long
using namespace std; 

int binaryExp(int a , int b)
{
	if(b==0) return 1 ; 
	ll res = binaryExp(a,b/2);
	return (b&1 ? a*res*res : res*res) ; 
}
int binaryExpItrator(int a , int b )
{
	int ans = 1 ; 
	while(b)
	{
		if(b&1) ans *= a ; 
		a *= a ; 
		b >>= 1 ; 
	}
	return ans ; 
}
int main()
{
	cout << pow(2,3) << endl ; //it's use double data_type
								// in cp we can't use double data type 
	cout << binaryExp(2,3) << endl ; //complexity log(b)

	cout << binaryExpItrator(2,3) << endl ; //complexity Log(b)
	//suitable for using binary itration 
}