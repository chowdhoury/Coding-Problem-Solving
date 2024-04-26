#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    while(cin >> a)
    {
        int n;
        cin >> n;
        while(n--)
        {
            int x;
            cin >> x;
            cout << a[x-1];
        }
        cout << endl;
    }
    return 0;
}
