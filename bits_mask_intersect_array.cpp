#include<iostream>
using namespace std; 

void printBinary(int num)
{
	for(int i=10; i>=0; --i)
		cout << (1&(num>>i));
	cout << endl ; 
}
int main()
{
	int a[3] = {1,2,3} , b[5] = {5,3,6,7};
	int mask[2] = {};
	int m = 0 ; 
	for(int i=0; i<3; ++i)
		m = (m|(1<<a[i]));
	cout << m << endl ;
	printBinary(m); 
	int m2 = 0 ; 
	for(int i=0; i<5; ++i)
		m2 = (m2|(1<<b[i]));
	cout << m2 << endl ;
	printBinary(m2); 
	int res = (m&m2) ; 
	printBinary(res);
	int cnt = 0  ; 
	for(int i = 31; i>=0; --i)
		if((res&(1<<i)))
			cnt++;
	cout << cnt << endl ; 
}