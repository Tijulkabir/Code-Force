#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int>a(n),b(n);
    for (int i = 0; i <n; i++)
    {
        cin >> a[i]>>b[i];
    }
    
    for (int i = 0; i < n; i++)
    {
       int rem=a[i]%b[i];
       if(rem==0)
       {
            cout << 0<<endl;
       }
       else
       {
            cout << b[i]-rem <<endl;
       }
    }
    
}