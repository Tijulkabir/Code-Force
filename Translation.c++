#include<bits/stdc++.h>
using namespace std;
int main()
{
    string word,revw;
    cin >> word;
    cin >> revw;

    reverse(word.begin(),word.end());

    if(word==revw)
    {
        cout << "YES" << endl;
    }

    else{
        cout << "NO" << endl;
    }

  return 0;
}