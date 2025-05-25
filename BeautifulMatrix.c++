#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int i,j;
    int count;
    int arr[5][5];
    for (int i = 0; i < 5; i++)
    {
        for ( j = 0; j<5; j++)
        {
            cin >> arr[i][j];
        }
        
    }
    
    int t1=2,t2=2;

   for (int i = 0; i < 5; i++)
{
    for (int j = 0; j < 5; j++)
    {
        if (arr[i][j] == 1)
        {
            count = abs(i - t1) + abs(j - t2);
        }
    }
}

    cout << count << endl; 
    return 0;
    
}