#include<iostream>
using namespace std; 

int main()
{
	int a = 4 , b = 6 ; 
	a = a^b ; 
	b = b^a ; //b = b^(a^b) ; b = a ;a^a = 0
	a = a^b ; //a = a^(b^a) ; a = b ;b^b = 0
	cout << a << " " << b << endl ; 
/*
	x^x = all zero 
	all zero ^ x = x 
	associative ->
				a^(b^c) == b^(a^c) == c^(a^b)
	Xor property
	0^0 --> 0
	0^1 --> 1
	1^0 --> 1
	1^1 --> 0
	thats's means both same result will be zero
	*/
}