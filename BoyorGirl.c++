#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
    string magic;
    cin >> magic;
    for (int i = 0; i < magic.size(); i++)
    {
        magic[i]=tolower(magic[i]);
    }

    string word=magic;
    int n=word.size();
    int counti=0;
    for (int i = 0; i < n; i++)
    {    int count=0;
        for (int j = 0; j < i; j++)
        {
           
            if(word[i]==word[j])
            {
            count =1;
            break;
            }   
        }
        if(count==0)
        {
            counti++;
        }
        
    }
    if(counti %2==1)
    {
        cout << "IGNORE HIM!" <<endl;
    }
    else{
        cout << "CHAT WITH HER!" << endl;    
    }
   
}