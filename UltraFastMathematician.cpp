#include<bits/stdc++.h>
using namespace std;
int main()
{
	string one;
	string two;
	cin >> one;
	cin >> two;
	for (int i = 0; i < one.size(); ++i)
	{
		if (one[i]==two[i])
		{
			cout<<0 ;
		}
		else
		{
			cout<<1;
		}
	}
	return 0;
}