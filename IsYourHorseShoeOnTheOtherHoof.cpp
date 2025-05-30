#include<bits/stdc++.h>
using namespace std;
int main()
{
	//int gon[4];
	vector<int>gon(4);

	int count=0;

	for (int i = 0; i <4; ++i)
	{
		cin >> gon[i];
	}
	//using set
	set<int>uni(gon.begin(), gon.end());

	int buy=4-uni.size();
	cout << buy << endl;

	return 0;
}