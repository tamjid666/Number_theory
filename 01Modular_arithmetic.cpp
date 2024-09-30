/*
Theory
    1.(a+b)%M =( (a%M) + (b%M) ) % M
    2.(a*b)%M =( (a%M) * (b%M) ) % M
    3.(a-b)%M =( (a%M) - (b%M) + M ) % M
    4.(a/b)%M =( (a%M) * (1/b) % M ) % M //here 1/b is multiplicative inverse
Question
    Given a number N . print it's factorial.
    Constrainsts
    1 <= N <= 100

    print answer moduler M
    where M = 47
Explaination 
    suppose A % M here reminder always less than M 
    let 5!
    ( 1 * 2 * 3 * 4 * 5 ) % 47 
    ( (1* 2*3*4)%47 * 5%47) % 47
    ( (1*2*3)%47 * 4%47) % 47
    ( (1*2)%47 * 3%47) %47

    if question gave M = 10e9 + 7 ; 
    a. it's close to int type range 
    b. Multiplicative inverse
        i.10e9+7 is prime number
*/

#include<iostream>
using namespace std; 

int main()
{
    int n ;cin >> n ; 
    int M = 47 ; 
    int fact = 1 ; 
    for(int i=2 ; i<=n; ++i)
        fact = ( fact * i ) % M; 
    cout << fact ; 
}