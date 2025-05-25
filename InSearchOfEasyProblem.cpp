#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int arr[n];
	int zero=0,one=0;
	for (int i = 0; i < n; ++i)
	{
		cin >>arr[i];
	}
	for (int i = 0; i < n; ++i)
	{
		if (arr[i]==0)
		{
			zero++;
		}
		else
		{
			one++;
		}

	}
	if(one>0)
	{
		cout << "HARD" << endl;
	}
	else if(zero>0)
	{
		cout << "EASY" << endl;
	}
	return 0;
}