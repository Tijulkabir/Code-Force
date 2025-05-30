#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,p,q;
    cin >> n;

    cin >>p;
    vector<int>arro(p);
    for (int i = 0; i < p; i++)
    {
        cin>> arro[i];
    }

    cin >> q;
    vector<int>arrt(q);
    for (int i = 0; i < q; i++)
    {
        cin >> arrt[i];
    }

    set<int>store;
    for (int i = 0; i < p; i++)
    {
        store.insert(arro[i]);
    }
    for (int i = 0; i < q; i++)
    {
        store.insert(arrt[i]);
    }

    if(store.size()==n)
    {
        cout << "I become the guy." << endl;
    }
    else
    {
        cout << "Oh, my keyboard!" << endl;
    }

    return 0;
}