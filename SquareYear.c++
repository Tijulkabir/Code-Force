#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<string> numbers(n);
    int a=0,b=0;

    for (int i = 0; i < n; i++) 
    {
        cin >> numbers[i];  
    }
    for (int i = 0; i < n; ++i)
    {   
        int year=stoi(numbers[i]);
        int root=sqrt(year);

        a=root/2;
        b=root-a;
        if (root*root!=year)
        {
            cout << "-1" << endl;
        }
        else
        {
           cout << a << " " <<  b << endl;
        }
        
    }
    
    return 0;
}
