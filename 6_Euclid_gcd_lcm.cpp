#include<iostream>
// #include<algorithm>
using namespace std; 

int gcd(int a , int b)
{
	if(a%b==0)return b;
	return gcd(b,a%b) ; 
}
int main()
{
	int a , b ; cin >> a >>  b ; 
	/*int gcd = __gcd(a,b) ; 
	int lcm = (a*b)/gcd ; */
	int g = gcd(a,b) ; 
	int lcm = (a*b)/g ; 
	cout << g << " " << lcm ; 
}