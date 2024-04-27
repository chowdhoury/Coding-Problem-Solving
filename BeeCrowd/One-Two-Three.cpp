#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string a;
        cin >> a;
        if(a=="one" || (a[0]=='o' && a[1]=='n') || (a[0]=='o' && a[2]=='e') || (a[1]=='n' && a[2]=='e'))
        {
            cout << 1 << endl;
        }else if(a=="two" || (a[0]=='t' && a[1]=='w') || (a[0]=='t' && a[2]=='o') || (a[1]=='w' && a[2]=='o'))
        {
            cout << 2 << endl;
        }else
        {
            cout << 3 << endl;
        }
    }
    return 0;
}
