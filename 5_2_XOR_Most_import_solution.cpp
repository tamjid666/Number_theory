#include<iostream>
using namespace std; 
/*
	given array a of n integers .All integers
	are present in event count except one.
	Find that one integer which has odd count
	in O(N) time complexity and O(1) space ; 

	Constrain : 
	N <10e5
	a[i] << 10e5

	test case : 
	9
	2 4 6 7 7 4 2 2 2
*/
int main()
{
	//it can be using hasing but we need O(1) space and time 
	//a^b^c^c^b 
	//a^b^b
	//a
	int n ; cin >> n ;
	int arr[n] , ans = 0;
	for(auto &x:arr)
	{
		cin >> x ; 
		ans^=x ; 
	} 
	cout << ans << endl ; 
}