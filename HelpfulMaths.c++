#include <bits/stdc++.h>
using namespace std;

int main()
{
    string child;
    cin >> child;

    int len = child.size();

    for (int i = 0; i < len; i += 2) 
    {
        for (int j = 0; j < len - 2; j += 2) 
        {
            if (child[j] > child[j + 2]) 
            {
                char temp = child[j];
                child[j] = child[j + 2];
                child[j + 2] = temp;
            }
        }
    }

    cout << child << endl;
}
