#include<iostream>
using namespace std;
int main()
{
    long long n,pre;
    int count=0;
    cin >> n;

    while (n>0)
    {
        pre=n%10;
        if (pre==4 || pre==7)
        {
            count++;
        }
        n/=10;
        
    }
    if (count==4 || count==7)
    {
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    return 0;
}