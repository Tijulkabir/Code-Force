#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string wl;
    int counta=0,contad=0;
    cin >> wl ;

    for (int i = 0; i <n; i++)
    {
        if(wl[i]=='A')
        {
            counta++;
        }
        else if (wl[i]=='D')
        {
            contad++;
        }
}
    if(counta>contad)
    {
        cout << "Anton" << endl;
    }
    else if (counta<contad)
    {
        cout << "Danik" << endl;
    }
    else{
        cout << "Friendship" << endl;
    }
    return 0;
}