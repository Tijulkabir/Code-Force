#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,h,sum=0;
    cin >> n >> h;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
       cin >> arr[i];
    }
    
    for (int i = 0; i < n; i++)
    {
        if(arr[i]<=h)
        {
            sum++;
        }
        else
        sum=sum+2;
    }
    cout << sum << endl;

    return 0;
}