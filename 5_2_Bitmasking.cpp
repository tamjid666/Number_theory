//https://codeforces.com/blog/entry/73558
#include<bits/stdc++.h>
using namespace std; 

void printBinary(int num)
{
	for(int i=30; i>=0; --i)
		cout << ((num>>i)&1) ; 
	cout << endl ;  
}
int main()
{
	int n ; cin >> n ;
	vector<int> masks(n,0) ; 

	for(int i=0; i<n; ++i)
	{
		int num_workers; cin >> num_workers ; 
		int mask = 0 ; 
		while(num_workers--)
		{
			int day; cin >> day ; 
			mask = (mask | (1<<day));
		}
		masks[i] = mask ; 
	} 
	/*
	for(int i=0; i<n; ++i)
	{
		cout << masks[i] << endl ;
		printBinary(masks[i]) ; 
	}*/
	int max_days = 0 ;
	for(int i=0; i<n-1; ++i){
		for(int j=i+1; j<n; ++j){
			//day[i],day[j]
			int intersection = (masks[i]&masks[j]);
			int common_days = 0 ; 
			for(int i=31; i>=0; --i)
				if(intersection&(1<<i))
					common_days++;
			max_days = max(max_days,common_days);
		}
	}
	cout << max_days << endl ; 
	// O(N^2 * 30) ; 
}