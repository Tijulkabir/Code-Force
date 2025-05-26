#include<bits/stdc++.h>
using namespace std;
int main()
{
	int times, bar;
	string queue;
	cin >> times >> bar;
	cin >> queue;
	while(bar--)
	{
	for (int i = 0; i<times-1; ++i) 
	{
        if (queue[i]=='B' && queue[i+1]=='G')
        {
        	swap(queue[i],queue[i+1]);
        	i++;
        }
    }
}
cout << queue << endl;
return 0;
}