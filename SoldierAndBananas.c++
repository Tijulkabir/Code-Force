#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long k,n,w,teka;
    cin >> k >> n >> w;
    teka = k*w*(w+1)/2;
    if(teka<=n)
    {
        cout << 0 << endl;
    }
    else if (teka>n)
    {
        cout << teka-n << endl;
    }
    
    return 0;
    

}