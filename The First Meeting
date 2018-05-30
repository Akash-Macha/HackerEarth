// https://www.hackerearth.com/practice/math/number-theory/primality-tests/practice-problems/algorithm/little-shino-and-prime-difference-38c91b0d/

#include<iostream>
#include<math.h>
using namespace std;
	bool isPrime(int n)
	{
	    // Corner cases
	    if (n <= 1)  return false;
	    if (n <= 3)  return true;

	    // This is checked so that we can skip 
	    // middle five numbers in below loop
	    if (n%2 == 0 || n%3 == 0) return false;

	    for (int i=5; i*i<=n; i=i+6)
	        if (n%i == 0 || n%(i+2) == 0)
	           return false;

	    return true;
	}	
int main()
{
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;
	
	cin >> n;
	int small = 0;
	int large = 0;
	int initializing = 0;

	int edgeCondition = 0;
	for(int i=0;i<n;i++)
	{
		int value;
		cin >> value;
		if(isPrime(value))
		{
			if(edgeCondition <2)
				++edgeCondition;
			if(initializing == 0)
			{
				small = value;
				large = value;
				++initializing;
			}
				
			else if(value > large)
				large = value;
			else if(value < small)
				small = value;
		}
	}
	if(edgeCondition == 1)
		cout << "0";
	else if(edgeCondition == 0 )
		cout << "-1";
	else
		cout << abs(large-small);
}
