#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long n;
	cin >>n;

	long long result=(n%2==0)? (n/2):-((n+1)/2);
	
	cout << result << endl;
	return 0;
}