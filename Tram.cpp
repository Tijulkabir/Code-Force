#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int curp=0,maxp=0;
    for (int i = 0; i < n; ++i)
    {
        int exitp, comep;
        cin >> exitp >> comep;
        curp-=exitp;
        curp+=comep;
        maxp=max(maxp,curp);
    }
    cout << maxp << endl;
    return 0;
}