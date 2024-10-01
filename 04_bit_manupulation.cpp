#include<bits/stdc++.h>
using namespace std; 

void printBinary(int num)
{
	for(int i=10; i>=0; --i)
		cout << ((num>>i)&1) ;
	cout << endl ; 
}
int main()
{
	//odd_even
	/*printBinary(5);
	for(int i=0; i<8; ++i)
	{
		printBinary(i);
		if(i&1)//(i%2 != 0 )
			cout << "odd\n";
		else
			cout << "even\n" ; 
	}*/
	int n = 5 ; 
	cout << ((n&1) ? "Odd\n" : "Even\n") ; 

	//multiply_divided
	cout << (n>>1) << endl ; 
	cout << (n<<1) << endl ; 
	//101 ----> 5
	//10 right shift --> 5/2 = 2 
	//1010 left shift --> 5*2 = 10 

	//upper_case <---> lower_case
	for(char c='A'; c<='C'; ++c)
		{cout << c << " " ; printBinary(int(c));} 
	for(char c='a'; c<='c'; ++c)
		{cout << c << " " ; printBinary(int(c));} 

	char ch = 'E';
	cout << char(ch^(1<<5)) << endl; //toggle the 5th bit

	ch = 'A'; 
	char ch1 = ch | (1<<5) ; //set the 5th bit
	cout << "Set : "<<ch1 << endl ;  
			/*here (1<<5) = ' '
				so, (ch | ' ')
				*/
	ch = 'a'; 
	ch1 = ch & ~(1<<5) ; 
	cout <<"Unset : "<<ch1 << endl ; //unset the 5th bit
			/*here ~(1<<5) = '_'
				so, (ch & '_')
				*/

	//power of 2
	int check = 16 ; 
	if(check & (check-1))
		cout << "Not power of 2";
	else
		cout << "Power of 2"; 
	/*check = 16
	basicaly 2 power always like that
	 00010000
   & 00001111(check-1)
	 ---------
	 00000000*/
}