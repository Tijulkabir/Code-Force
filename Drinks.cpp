#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >>n;
	int per[n];
	for (int i = 0; i < n; ++i)
	{
		cin >>per[i];
	}
	double sum=0;
	for (int i = 0; i < n; ++i)
	{
		sum+=per[i];
	}
	double ora=sum/n;
	cout << fixed <<setprecision(12)  <<ora <<endl;

	return 0;
}