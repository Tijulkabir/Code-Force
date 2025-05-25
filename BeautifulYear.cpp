#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin >> s;
	int n=stoi(s);

	while(1)
	{
		n++;
		s=to_string(n);
		bool magic=true;
		for (int i = 0; i < 4; ++i)
		{
			for (int j = i+1; j < 4; ++j)
			{
				if (s[i]==s[j])
				{
					magic=false;
					break;
				}
			}
			if(!magic) break;
		}	
			if (magic)
	{
		cout << s << endl;
		break;
	}
		}
		return 0;
	}
	
	
