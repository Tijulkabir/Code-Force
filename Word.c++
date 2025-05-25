#include <bits/stdc++.h>
#include <string.h>
#include <ctype.h>
using namespace std;

int main()
{
    string word;

    cin >> word;

    int up = 0, lw = 0;

    for (int i = 0;i< word.size(); i++)
    {   
        if (isupper(word[i]))
        {
            up++;
        }
        else if (islower(word[i]))
        {
            lw++;
        }
    }

    for (int i = 0;i<word.size(); i++)
    {
        if (up > lw)
        {
            word[i] = toupper(word[i]);
        }
        else if (up < lw)
        {
            word[i] = tolower(word[i]);
        }
        else
        {
            word[i] = tolower(word[i]);
        }
    }

    cout << word<<  endl;

    return 0;
}
