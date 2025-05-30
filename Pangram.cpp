#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >>n;
	cin.ignore();

	string paga;
	paga.resize(n);
	//resize this string to n char

	cin.read(&paga[0],n);
	//input n times char

	set<char>alpha;
	for (char letter:paga)
	{
		if (isalpha(letter))
		{
			alpha.insert(tolower(letter));
		}
	}
	if (alpha.size()==26)
	{
		cout << "YES" << endl;
	}
	else
		cout << "NO" << endl;

	return 0;

}