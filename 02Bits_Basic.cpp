/*
theory__
    in 32 bit maximu 2e32-1 value store 
    int max take 2e32-1 unsigned 
    default INT_MAX = 2e31-1
    * signed int reserve a bit for (+-) int
    * unsigned doesn't reserve any value
*/
#include<iostream>
using namespace std; 

int main()
{
    cout << INT_MAX << endl ; 
    int a = (1ll<<31) - 1 ; 
    cout << a << endl ; 
    unsigned int b = (1ll<<32) - 1; 
    cout << b ; 
}