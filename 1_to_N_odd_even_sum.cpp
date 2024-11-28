#include<iostream>
using namespace std; 

int main()
{
	int n ; cin >> n ;
	int even_sum , odd_sum ; 
	if(n&1)
	{
		odd_sum = (n+1)*(n+1)/4;
		even_sum = (n*(n+1)/2) - odd_sum ;  
	} 
	else
	{
		even_sum = (n+2)*n/4 ; 
		odd_sum = (n*n)/4 ; 
	}
	cout << "Even Sum : " << even_sum << endl ; 
	cout << "Odd Sum : " << odd_sum << endl ; 
}