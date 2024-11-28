#include<bits/stdc++.h>
using namespace std; 

void printBinary(int num)
{
	for(int i=10; i>=0; --i)
	{	  
		cout << ((num>>i)&1) ; 
	}
	cout << endl ; 
}
int main()
{
	int a = 10 ; 
	printBinary(a);
	
	//set_or_not
	int i = 1 ; 
	if((a & (1<<i)) != 0 )
		cout << "Set bit\n"; 
	else
		cout << "Not Set Bit\n" ; 

	//set	 
	printBinary(a|(1<<i));

	//unset
	printBinary(a&~(1<<i));
		/*(~)tilda oparator-> let , i have 110
						   tilda make this 001
						 	*/ 
	//toggle
	printBinary(a^(1<<i));

	//bit count
	int cnt = 0  ; 
	for(int i = 31; i>=0; --i)
		if((a&(1<<i))!=0)
			cnt++;
	cout << "Count of the set bit : "<< cnt << endl ; 

	cout << __builtin_popcount(a) << endl ; 
}