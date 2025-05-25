#include<bits/stdc++.h>
using namespace std;
int main()
{

int n,k,point[100];
cin >> n >> k;

for (int i = 0; i < n; i++)
{
    cin >> point[i];
}

int number=point[k-1];
int count=0;

for (int i = 0; i < n; i++)
{
    if(point[i]>=number && point[i]>0)
    {
        count++;
    }
}

    cout << count << endl;
    
    return 0;
}