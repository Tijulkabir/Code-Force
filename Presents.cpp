#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >>n;

	int arr[n+1];
	int res[n+1];

	for (int i= 1; i <= n; ++i)
	{
		cin >> arr[i];
	}

	for (int i = 1; i <=n; ++i)
	{
		int get=arr[i];
		res[get]=i; 
	}

	for (int i = 1; i <=n; ++i)
	{
		cout<<res[i] <<" ";
	}

	cout << endl;
	
	return 0;
}