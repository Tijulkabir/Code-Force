#include<bits/stdc++.h>
using namespace std;
int main()
{
    string one;
    string two;

    cin >> one >> two;

    for (char &c : one) c = tolower(c);
    for (char &c : two) c = tolower(c);

    if(one>two)
    {
        cout << 1 << endl;
    }
    else if (two>one)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << 0 << endl;
    }
    return 0;
}