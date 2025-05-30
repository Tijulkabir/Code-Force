#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int count =0;
	int arr[n][2];
	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i][0] >>arr[i][1];
	}
    for (int i = 0; i <n; i++)
    {
        if(arr[i][1]-arr[i][0]>=2)
        {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}