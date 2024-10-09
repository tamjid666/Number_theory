//https://codeforces.com/problemset/problem/2008/C
#include<iostream>
#include<math.h>
using namespace std; 

int main()
{
	int t ; cin >> t ; while(t--)
	{
		int l , r ; cin >> l >> r ; 
		int dif = r-l ; 
		//n*(n+1)/2 = r-l 
		double ans = ((-1 + sqrt(1+8.0*dif))/2.0); 
		cout << int(ans)+1 << endl ; 
	}
}
